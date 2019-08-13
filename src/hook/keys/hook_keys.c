/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:35:04 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:35:06 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/keys/hook_keys.h"

int				is_shift_release(int key)
{
	return (key == 1L << 30);
}

int				is_shift(int key)
{
	return (key == K_LSHFT || key == K_RSHFT);
}

int				key_press(int key, t_frc *frc)
{
	static int	shift = 0;

	(void)shift;
	if (is_quit_keys(key))
		quit_keys_hook(frc);
	if (is_close_keys(key))
		close_keys_hook(frc);
	if (is_move_keys(key))
		move_keys_hook(key, frc);
	if (is_random_keys(key))
		random_keys_hook(frc);
	if (is_repair_keys(key))
		repair_keys_hook(frc);
	if (is_select_keys(key))
		select_keys_hook(key, frc);
	if (is_toggle_julia_hook(key))
		toggle_julia_hook(frc);
	if (is_menu_keys(key))
		menu_keys_hook(frc);
	return (0);
}

int				key_release(int key, t_frc *frc)
{
	if (key == K_LSHFT || key == K_RSHFT)
		key_press(1L << 30, frc);
	return (0);
}
