/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:35:23 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:40:13 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/keys/hook_keys_move.h"

int		is_move_keys(int key)
{
	return (key == K_ARW_L || key == K_ARW_R ||
			key == K_ARW_B || key == K_ARW_T);
}

int		move_keys_hook(int key, t_frc *frc)
{
	if (key == K_ARW_L && frc->cvs)
		left_hook(frc);
	else if (key == K_ARW_R && frc->cvs)
		right_hook(frc);
	else if (key == K_ARW_B && frc->cvs)
		bottom_hook(frc);
	else if (key == K_ARW_T && frc->cvs)
		top_hook(frc);
	return (1);
}
