/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_point.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:02:41 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:02:47 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_point.h"

t_point3		*p_point3(double x, double y, double z)
{
	t_point3	*point;

	if (!(point = (t_point3 *)ft_memalloc(sizeof(t_point3))))
		return (0);
	point->x = x;
	point->y = y;
	point->z = z;
	return (point);
}

t_point3		point3(double x, double y, double z)
{
	return ((t_point3){ x, y, z });
}

t_point2		*p_point2(int x, int y)
{
	t_point2	*point;

	if (!(point = (t_point2 *)ft_memalloc(sizeof(t_point2))))
		return (0);
	point->x = x;
	point->y = y;
	return (point);
}

t_point2		point2(int x, int y)
{
	return ((t_point2){ x, y });
}

t_point2d		point2d(double x, double y)
{
	return ((t_point2d){ x, y });
}
