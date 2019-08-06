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
		pthread_create((p + i), NULL,
					   (void *(*)(void *))julia_worker, (void *)(w + i));
	}
	while (i--)
		pthread_join(p[i], NULL);
	mlx_put_image_to_window(frc->mlx, frc->win, frc->cvs->img, 0, 0);
	return (1);
}