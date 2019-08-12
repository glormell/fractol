#ifndef T_MOUSE_H
# define T_MOUSE_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"

typedef struct	s_mouse
{
	t_point2	p;
	int			l;
	int			m;
	int			r;
}				t_mouse;

#endif
