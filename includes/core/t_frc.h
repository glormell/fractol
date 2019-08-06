#ifndef T_FRC_H
# define T_FRC_H
# include "core/t_canvas.h"
# include "core/t_mandelbrot.h"
# include "core/t_julia.h"

typedef struct		s_frc
{
	void			*mlx;
	void			*win;
	t_point2		mouse;
	t_canvas		*cvs;
	t_mandelbrot	mb;
	t_julia			jl;
}					t_frc;

#endif
