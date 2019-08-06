//
//  t_frc.h
//  Fractol
//
//  Created by Garth tyrell Lormelle on 10/07/2019.
//

#ifndef T_FRC_H
# define T_FRC_H
# include "core/t_canvas.h"
# include "core/t_mandelbrot.h"

typedef struct	s_frc
{
	void		      *mlx;
	void		      *win;
	t_point2	    mouse;
  t_canvas      *cvs;
  t_mandelbrot  mb;
}				t_frc;

#endif
