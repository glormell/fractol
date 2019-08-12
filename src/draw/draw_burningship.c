#include "draw/draw_burningship.h"

static void		burningship_iterator(t_frc *frc, t_complex p, t_point2 c)
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
		n = complex(fabs(o.r * o.r - o.i * o.i + p.r),
					fabs(2 * o.r * o.i + p.i));
		++i;
	}
	if (i == frc->cvs->i)
		put_pixel(frc, c, 0x000000);
	else
		put_pixel(frc, c, frc->cvs->c * i);
}

static void		*burningship_worker(t_bs_worker *w)
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
			burningship_iterator(w->frc, p, c);
			++c.x;
		}
		++c.y;
	}
	pthread_exit(0);
}

int				draw_burningship(t_frc *frc)
{
	pthread_t	p[THREADS];
	t_bs_worker	w[THREADS];
	t_point2d	f;
	t_point2d	t;
	int			i;
	
	i = -1;
	while (++i < THREADS)
	{
		f = point2d(0, i * T_WIDTH);
		t = point2d(WIN_WIDTH, (i + 1) * T_WIDTH);
		w[i] = (t_bs_worker){frc, f, t};
		pthread_create((p + i), 0, (void *(*)(void *))burningship_worker,
					   (void *)(w + i));
	}
	while (i--)
		pthread_join(p[i], 0);
	mlx_put_image_to_window(frc->mlx, frc->win, frc->cvs->img, 0, 0);
	if (frc->menu.s)
		frc->menu.draw(frc);
	return (1);
}

int		burningship_init(t_frc *frc)
{
	clear(frc->mlx, &frc->bs.cvs);
	frc->bs.cvs.c = 0x000802;
	frc->bs.cvs.i = 300;
	frc->bs.cvs.min = complex(-4, -2);
	frc->bs.cvs.max = complex(4, 2);
	frc->bs.cvs.t = point2d(-0.5, 0);
	frc->bs.cvs.draw = (int (*)(void *))draw_burningship;
	return (1);
}
