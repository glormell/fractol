#ifndef T_CANVAS_H
# define T_CANVAS_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"

typedef struct	s_canvas
{
	void		*img;
	int			c;
	int			i;
	t_complex	min;
	t_complex	max;
	t_point3	t;
	int			(*draw)(void *);
}				t_canvas;

#endif
