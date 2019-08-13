/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:44:04 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:44:06 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "menu/menu.h"

int		menu_init(t_frc *frc)
{
	frc->mn.s = 1;
	frc->mn.p = point2(20, 20);
	frc->mn.draw = (int (*)(void *))draw_menu;
	main_menu_init(frc);
	mod_menu_init(frc);
	action_menu_init(frc);
	return (1);
}
