//
//  t_canvas.h
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#ifndef T_CANVAS_H
# define T_CANVAS_H
# include "core/core_point.h"

typedef struct	s_canvas
{
	void		*img;
	t_point3	t;
	t_point3	r;
  t_point2  s;
	int			changed;
}				t_canvas;

#endif
