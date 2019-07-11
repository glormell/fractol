//
//  t_frc.h
//  Fractol
//
//  Created by Garth tyrell Lormelle on 10/07/2019.
//

#ifndef T_FRC_H
# define T_FRC_H
# include "core/t_canvas.h"

typedef struct	s_frc
{
	void		*mlx;
	void		*win;
	t_canvas	cvs;
	t_point2	mouse;
	int			(*mandelbrot)(struct s_frc *);
	int			(*julia)(struct s_frc *);
	int			(*burningship)(struct s_frc *);
}				t_frc;

#endif
