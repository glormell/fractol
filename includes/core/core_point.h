//
//  t_point.h
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#ifndef CORE_POINT_H
# define CORE_POINT_H
# include "libft.h"
# include "color/t_color.h"

typedef struct	s_point3
{
	int			x;
	int			y;
	int			z;
}				t_point3;

typedef struct	s_point2
{
	int			x;
	int			y;
}				t_point2;

typedef struct	s_point2c
{
	int			x;
	int			y;
	t_color		c;
}				t_point2c;

t_point3		*p_point3(int x, int y, int z);
t_point3		point3(int x, int y, int z);
t_point2		*p_point2(int x, int y);
t_point2		point2(int x, int y);
t_point2c		point2c(int x, int y, t_color c);
#endif
