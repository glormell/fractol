/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_menu.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:35:19 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:38:57 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/keys/hook_keys_menu.h"

int		is_menu_keys(int key)
{
	return (key == K_M);
}

int		menu_keys_hook(t_frc *frc)
{
	if (!(frc->cvs))
		return (0);
	if (!frc->mn.s)
		frc->jl.unlocked = 0;
	frc->mn.s = !frc->mn.s;
	frc->cvs->draw(frc);
	return (0);
}
