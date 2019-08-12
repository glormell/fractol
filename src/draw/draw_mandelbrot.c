#include "draw/draw_mandelbrot.h"

static void		mandelbrot_iterator(t_frc *frc, t_complex p, t_point2 c)
{
	t_complex	o;
	t_complex	n;
	int		i;
	
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
	t_complex	p;
	t_point2	c;

	c.y = w->from.y;
	while (c.y < w->to.y)
	{
		c.x = w->from.x;
		while (c.x < w->to.x)
		{
			p = complex(c.x / (WIN_WIDTH / (w->frc->cvs->max.r -
											w->frc->cvs->min.r)) +
						w->frc->cvs->min.r + w->frc->cvs->t.x,
						c.y / (WIN_HEIGHT / (w->frc->cvs->max.i -
											 w->frc->cvs->min.i)) +
						w->frc->cvs->min.i + w->frc->cvs->t.y);
			mandelbrot_iterator(w->frc, p, c);
			++c.x;
		}
		++c.y;
	}
	pthread_exit(0);
}

int				draw_mandelbrot(t_frc *frc)
{
	pthread_t	p[THREADS];
	t_mb_worker	w[THREADS];
	t_point2d	f;
	t_point2d	t;
	int			i;

	i = -1;
	while (++i < THREADS)
	{
		f = point2d(0, i * T_WIDTH);
		t = point2d(WIN_WIDTH, (i + 1) * T_WIDTH);
		w[i] = (t_mb_worker){frc, f, t};
		pthread_create((p + i), 0, (void *(*)(void *))mandelbrot_worker,
					   (void *)(w + i));
	}
	while (i--)
		pthread_join(p[i], 0);
	mlx_put_image_to_window(frc->mlx, frc->win, frc->cvs->img, 0, 0);
	if (frc->menu.s)
		frc->menu.draw(frc);
	return (1);
}

int				mandelbrot_init(t_frc *frc)
{
	clear(frc->mlx, &frc->mb.cvs);
	frc->mb.cvs.c = 0x030306;
	frc->mb.cvs.i = 300;
	frc->mb.cvs.min = complex(-4, -2);
	frc->mb.cvs.max = complex(4, 2);
	frc->mb.cvs.t = point2d(-0.5, 0);
	frc->mb.cvs.draw = (int (*)(void *))draw_mandelbrot;
	return (1);
}
