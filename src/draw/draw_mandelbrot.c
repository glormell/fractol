//
//  draw_mandelbrot.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 23/07/2019.
//

#include "draw/draw_mandelbrot.h"
#include <stdio.h> // FIXME

static void   mandelbrot_iterator(t_frc *frc, t_complex p, t_point2 c)
{
  t_complex   o;
  t_complex   n;
  int         i;
  
  n = complex(0, 0);
  o = complex(0, 0);
  i = 0;
  while (i < frc->cvs->i && n.r * n.r + n.i * n.i <= 4)
  {
    o = n;
    n = complex(o.r * o.r - o.i * o.i + p.r,
                2 * o.r * o.i + p.i);
    ++i;
  }
	if (i == frc->cvs->i)
		put_pixel(frc, c, 0x000000);
	else
		put_pixel(frc, c, frc->cvs->c * i);
}

static void		*mandelbrot_worker(t_mb_worker *w)
{
  t_complex p;
  t_point2  c;
	
  c.y = w->from.y;
  while (c.y < w->to.y)
  {
    c.x = w->from.x;
    while (c.x < w->to.x)
    {
		p = complex(c.x / (WIN_WIDTH / (w->frc->cvs->max.r - w->frc->cvs->min.r)) + w->frc->cvs->min.r + w->frc->cvs->t.x,
					c.y / (WIN_HEIGHT / (w->frc->cvs->max.i - w->frc->cvs->min.i)) + w->frc->cvs->min.i + w->frc->cvs->t.y);
//		p = complex(1.5 * (c.x - WIN_WIDTH / 2) / (0.5 * w->frc->cvs->t.z * WIN_WIDTH) + w->frc->cvs->t.x,
//					(c.y - WIN_HEIGHT / 2) / (0.5 * w->frc->cvs->t.z * WIN_HEIGHT) + w->frc->cvs->t.y);
		if (c.x >= WIN_WIDTH || c.y >= WIN_HEIGHT)
			printf("(%d, %d; %f)", c.x, c.y, w->to.y);
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
  while (++i < THREADS)
  {
    f = point2d(0, i * T_WIDTH);
    t = point2d(WIN_WIDTH, (i + 1) * T_WIDTH);
    w[i] = (t_mb_worker){frc, f, t};
    pthread_create((p + i), NULL, (void *(*)(void *))mandelbrot_worker, (void *)(w + i));
  }
  while (i--)
    pthread_join(p[i], NULL);
  mlx_put_image_to_window(frc->mlx, frc->win, frc->cvs->img, 0, 0);
  return (1);
}
