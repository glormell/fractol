/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu_hover.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:41:15 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:41:16 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/menu/hook_menu_hover.h"

int				menu_hover_hook(t_frc *frc, t_menu_button *b)
{
	frc->mn.mb.h = b == &frc->mn.mb && !frc->mn.mb.d ? 1 : 0;
	frc->mn.jl.h = b == &frc->mn.jl && !frc->mn.jl.d ? 1 : 0;
	frc->mn.bs.h = b == &frc->mn.bs && !frc->mn.bs.d ? 1 : 0;
	frc->mn.tc.h = b == &frc->mn.tc && !frc->mn.tc.d ? 1 : 0;
	frc->mn.qt.h = b == &frc->mn.qt && !frc->mn.qt.d ? 1 : 0;
	frc->mn.hd.h = b == &frc->mn.hd && !frc->mn.hd.d ? 1 : 0;
	frc->mn.rp.h = b == &frc->mn.rp && !frc->mn.rp.d ? 1 : 0;
	frc->mn.rd.h = b == &frc->mn.rd && !frc->mn.rd.d ? 1 : 0;
	frc->mn.jk.h = b == &frc->mn.jk && !frc->mn.jk.d ? 1 : 0;
	frc->mn.draw(frc);
	return (0);
}
