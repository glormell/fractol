/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:01:59 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:02:01 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core.h"

t_frc		*p_frc(void *mlx, int *win_count, char *type)
{
	t_frc	*frc;

	if (!(frc = (t_frc *)ft_memalloc(sizeof(t_frc))))
		return (0);
	frc->mlx = mlx;
	frc->win_count = win_count;
	frc->ms.p = point2(0, 0);
	frc->ms.l = 0;
	frc->ms.m = 0;
	frc->ms.r = 0;
	if ((!(win_init(frc, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE))) ||
		(!(hook_init(frc))) ||
		(!(draw_init(frc, type))))
		exit(0);
	return (frc);
}
