/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:33:36 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:33:44 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook.h"

int	hook_init(t_frc *frc)
{
	mlx_hook(frc->win, E_CLOSE, XM_CLOSE, close_keys_hook, frc);
	mlx_hook(frc->win, E_KPRESS, XM_KPRESS, key_press, frc);
	mlx_hook(frc->win, E_KRELEASE, XM_KRELEASE, key_release, frc);
	mlx_hook(frc->win, E_MPRESS, XM_MPRESS, mouse_press, frc);
	mlx_hook(frc->win, E_MRELEASE, XM_MRELEASE, mouse_release, frc);
	mlx_hook(frc->win, E_MMOVE, XM_MMOVE, mouse_move, frc);
	return (1);
}
