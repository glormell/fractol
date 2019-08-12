#ifndef T_FRC_H
# define T_FRC_H
# include "core/t_menu.h"
# include "core/t_mouse.h"
# include "core/t_canvas.h"
# include "core/t_mandelbrot.h"
# include "core/t_julia.h"
# include "core/t_burningship.h"

typedef struct		s_frc
{
	void			*mlx;
	void			*win;
	int				*win_count;
	t_menu			mn;
	t_mouse			ms;
	t_canvas		*cvs;
	t_mandelbrot	mb;
	t_julia			jl;
	t_burningship	bs;
}					t_frc;

#endif
