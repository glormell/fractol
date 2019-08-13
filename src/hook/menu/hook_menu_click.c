/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu_click.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:41:07 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:41:08 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/menu/hook_menu_click.h"

int				menu_click_hook(t_frc *frc, t_menu_button *b)
{
	if (b == &frc->mn.mb && !frc->mn.mb.d)
		select_keys_hook(K_1, frc);
	else if (b == &frc->mn.jl && !frc->mn.jl.d)
		select_keys_hook(K_2, frc);
	else if (b == &frc->mn.bs && !frc->mn.bs.d)
		select_keys_hook(K_3, frc);
	else if (b == &frc->mn.tc && !frc->mn.tc.d)
		select_keys_hook(K_4, frc);
	else if (b == &frc->mn.rp && !frc->mn.rp.d)
		repair_keys_hook(frc);
	else if (b == &frc->mn.rd && !frc->mn.rd.d)
		random_keys_hook(frc);
	else if (b == &frc->mn.jk && !frc->mn.jk.d)
		toggle_julia_hook(frc);
	else if (b == &frc->mn.qt && !frc->mn.qt.d)
		quit_keys_hook(frc);
	else if (b == &frc->mn.hd && !frc->mn.hd.d)
		menu_keys_hook(frc);
	return (0);
}
