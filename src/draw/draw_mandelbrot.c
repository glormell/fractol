//
//  draw_mandelbrot.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 23/07/2019.
//

#include "draw/draw_mandelbrot.h"

static void   mandelbrot_iterator(t_frc *frc, t_complex p, t_point2 c)
{
  t_complex   o;
  t_complex   n;
  int         i;
  
  n = complex(0, 0);
  o = complex(0, 0);
  i = 0;
  while (i < frc->mb.i && n.r * n.r + n.i * n.i <= 4)
  {
    o = n;
    n = complex(o.r * o.r - o.i * o.i + p.r,
                2 * o.r * o.i + p.i);
    ++i;
  }
	if (i == frc->mb.i)
		put_pixel(frc->mlx, frc->mb.img, c, 0x000000);
	else
		put_pixel(frc, frc->mb.img, c, frc->mb.c * i);
}

static void		mandelbrot_worker(t_mb_worker *w)
{
  t_complex p;
  t_point2  c;
	
  c.y = w->from.y;
  while (c.y < w->to.y)
  {
    c.x = w->from.x;
    while (c.x < w->to.x)
    {
		p = complex(c.x / (WIN_WIDTH / (w->frc->mb.max.r - w->frc->mb.min.r)) + w->frc->mb.min.r + w->frc->mb.t.x,
					c.y / (WIN_HEIGHT / (w->frc->mb.max.i - w->frc->mb.min.i)) + w->frc->mb.min.i + w->frc->mb.t.y);
//		p = complex(1.5 * (c.x - WIN_WIDTH / 2) / (0.5 * w->frc->mb.t.z * WIN_WIDTH) + w->frc->mb.t.x,
//					(c.y - WIN_HEIGHT / 2) / (0.5 * w->frc->mb.t.z * WIN_HEIGHT) + w->frc->mb.t.y);
		mandelbrot_iterator(w->frc, p, c);
      ++c.x;
    }
    ++c.y;
  }
  pthread_exit(0);
}

int draw_mandelbrot(t_frc *frc)
{
  pthread_t   p[THREADS];
  t_mb_worker w[THREADS];
  t_point2d    f;
  t_point2d    t;
  int         i;
	
  i = -1;
	frc->mb.t = point3(0, 0, 1.5);
  while (++i < THREADS)
  {
    f = point2d(0, 0);
    t = point2d(WIN_WIDTH, WIN_HEIGHT);
    w[i] = (t_mb_worker){frc, f, t};
    pthread_create((p + i), NULL, mandelbrot_worker, (void *)(w + i));
  }
  while (i--)
    pthread_join(p[i], NULL);
  mlx_put_image_to_window(frc->mlx, frc->win, frc->mb.img, 0, 0);
  return (1);
}
