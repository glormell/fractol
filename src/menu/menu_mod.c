/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_mod.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:44:36 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 19:07:07 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "menu/menu_mod.h"

static int	mod_menu_repair(t_frc *frc)
{
	frc->mn.rp.p = point2(0, 4 * BTN_HEIGHT);
	frc->mn.rp.s = point2(MENU_WIDTH / 4, BTN_HEIGHT);
	frc->mn.rp.t = "Repair";
	frc->mn.rp.tp = point2(5, 0);
	frc->mn.rp.tc = 0xffffff;
	frc->mn.rp.h = 0;
	frc->mn.rp.a = 0;
	frc->mn.rp.d = 1;
	frc->mn.rp.color = 0x00babc;
	frc->mn.rp.h_color = 0x008889;
	frc->mn.rp.a_color = 0x008889;
	frc->mn.rp.d_color = 0xaaaaaa;
	return (1);
}

static int	mod_menu_random(t_frc *frc)
{
	frc->mn.rd.p = point2(MENU_WIDTH / 4, 4 * BTN_HEIGHT);
	frc->mn.rd.s = point2(MENU_WIDTH / 4, BTN_HEIGHT);
	frc->mn.rd.t = "Rand";
	frc->mn.rd.tp = point2(5, 0);
	frc->mn.rd.tc = 0xffffff;
	frc->mn.rd.h = 0;
	frc->mn.rd.a = 0;
	frc->mn.rd.d = 1;
	frc->mn.rd.color = 0x00babc;
	frc->mn.rd.h_color = 0x008889;
	frc->mn.rd.a_color = 0x008889;
	frc->mn.rd.d_color = 0xaaaaaa;
	return (1);
}

static int	mod_menu_unlock(t_frc *frc)
{
	frc->mn.jk.p = point2(MENU_WIDTH / 2, BTN_HEIGHT * 4);
	frc->mn.jk.s = point2(MENU_WIDTH / 2, BTN_HEIGHT);
	frc->mn.jk.t = "Unlock";
	frc->mn.jk.tp = point2(5, 0);
	frc->mn.jk.tc = 0xffffff;
	frc->mn.jk.h = 0;
	frc->mn.jk.a = 0;
	frc->mn.jk.d = 1;
	frc->mn.jk.color = 0x00babc;
	frc->mn.jk.h_color = 0x008889;
	frc->mn.jk.a_color = 0x008889;
	frc->mn.jk.d_color = 0xaaaaaa;
	return (1);
}

int			mod_menu_init(t_frc *frc)
{
	mod_menu_repair(frc);
	mod_menu_random(frc);
	mod_menu_unlock(frc);
	return (1);
}
