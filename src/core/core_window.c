/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:02:55 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:02:56 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_window.h"

int			win_init(t_frc *frc, int width, int height, char *title)
{
	if (!(frc->win = mlx_new_window(frc->mlx, width, height, title)))
		return (0);
	return (1);
}
