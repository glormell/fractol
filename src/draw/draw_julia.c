#include "draw/draw_julia.h"

static void		julia_iterator(t_frc *frc, t_complex p, t_point2 c)
{
	t_complex	o;
	t_complex	n;
	int		i;
	
	n = p;
	o = complex(0, 0);
	i = 0;
	while (i < frc->cvs->i && n.r * n.r + n.i * n.i <= 4)
	{
		o = n;
		n = complex(o.r * o.r - n.i * n.i + frc->jl.c.r,
					2 * o.r * n.i + frc->jl.c.i);
		++i;
	}
	if (i == frc->cvs->i)
		put_pixel(frc, c, 0x000000);
	else
		put_pixel(frc, c, frc->cvs->c * i);
}

static void		*julia_worker(t_jl_worker *w)
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
			julia_iterator(w->frc, p, c);
			++c.x;
		}
		++c.y;
	}
	pthread_exit(0);
}

int				draw_julia(t_frc *frc)
{
	pthread_t	p[THREADS];
	t_jl_worker	w[THREADS];
	t_point2d	f;
	t_point2d	t;
	int			i;
	
	i = -1;
	while (++i < THREADS)
	{
		f = point2d(0, i * T_WIDTH);
		t = point2d(WIN_WIDTH, (i + 1) * T_WIDTH);
		w[i] = (t_jl_worker){frc, f, t};
		pthread_create((p + i), 0, (void *(*)(void *))julia_worker,
					   (void *)(w + i));
	}
	while (i--)
		pthread_join(p[i], 0);
	mlx_put_image_to_window(frc->mlx, frc->win, frc->cvs->img, 0, 0);
	frc->mn.rp.d = 0;
	frc->mn.rd.d = 0;
	frc->mn.jk.d = 0;
	frc->mn.hd.d = 0;
	if (frc->mn.s)
		frc->mn.draw(frc);
	return (1);
}

int				julia_init(t_frc *frc)
{
	clear(frc->mlx, &frc->jl.cvs);
	frc->jl.cvs.c = 0x010505;
	frc->jl.cvs.i = 300;
	frc->jl.min = complex(-4, -2);
	frc->jl.max = complex(4, 2);
	frc->jl.cvs.min = frc->jl.min;
	frc->jl.cvs.max = frc->jl.max;
	frc->jl.cvs.t = point2d(-0.5, 0);
	frc->jl.p = point2d(528, 408.627);
	frc->jl.c = complex(-0.7, 0.27015);
	frc->jl.unlocked = 0;
	frc->jl.cvs.draw = (int (*)(void *))draw_julia;
	return (1);
}
