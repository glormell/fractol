//
//  core_point.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#include "core/core_point.h"

t_point3		*p_point3(double x, double y, double z)
{
	t_point3	*point;
	
	if (!(point = (t_point3 *)ft_memalloc(sizeof(t_point3))))
		return (NULL);
	point->x = x;
	point->y = y;
	point->z = z;
	return (point);
}

t_point3		point3(double x, double y, double z)
{
	return (t_point3){ x, y, z };
}

t_point2		*p_point2(int x, int y)
{
	t_point2	*point;
	
	if (!(point = (t_point2 *)ft_memalloc(sizeof(t_point2))))
		return (NULL);
	point->x = x;
	point->y = y;
	return (point);
}

t_point2		point2(int x, int y)
{
	return (t_point2){ x, y };
}
