#ifndef T_JULIA_H
# define T_JULIA_H
# include "core/t_canvas.h"
# include "core/core_complex.h"

typedef struct	s_julia
{
	t_canvas	cvs;
	t_point2d	p;
	t_complex	c;
}				t_julia;

#endif

