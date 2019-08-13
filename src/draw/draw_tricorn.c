#include "draw/draw_tricorn.h"

static void		tricorn_iterator(t_frc *frc, t_complex p, t_point2 c)
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
					-2 * o.r * o.i + p.i);
		++i;
	}
	if (i == frc->cvs->i)
		put_pixel(frc, c, 0x000000);
	else
		put_pixel(frc, c, frc->cvs->c * i);
}

static void		*tricorn_worker(t_lp_worker *w)
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
			tricorn_iterator(w->frc, p, c);
			++c.x;
		}
		++c.y;
	}
	pthread_exit(0);
}

int				draw_tricorn(t_frc *frc)
{
	pthread_t	p[THREADS];
	t_lp_worker	w[THREADS];
	t_point2d	f;
	t_point2d	t;
	int			i;
	
	i = -1;
	while (++i < THREADS)
	{
		f = point2d(0, i * T_WIDTH);
		t = point2d(WIN_WIDTH, (i + 1) * T_WIDTH);
		w[i] = (t_lp_worker){frc, f, t};
		pthread_create((p + i), 0, (void *(*)(void *))tricorn_worker,
					   (void *)(w + i));
	}
	while (i--)
		pthread_join(p[i], 0);
	mlx_put_image_to_window(frc->mlx, frc->win, frc->cvs->img, 0, 0);
	frc->mn.rp.d = 0;
	frc->mn.rd.d = 0;
	frc->mn.jk.d = 1;
	frc->mn.hd.d = 0;
	if (frc->mn.s)
		frc->mn.draw(frc);
	return (1);
}

int		tricorn_init(t_frc *frc)
{
	clear(frc->mlx, &frc->tc.cvs);
	frc->tc.cvs.c = 0x000802;
	frc->tc.cvs.i = 300;
	frc->tc.cvs.min = complex(-4, -2);
	frc->tc.cvs.max = complex(4, 2);
	frc->tc.cvs.t = point2d(-0.5, 0);
	frc->tc.cvs.draw = (int (*)(void *))draw_tricorn;
	return (1);
}
