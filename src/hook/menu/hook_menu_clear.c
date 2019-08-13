/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:40:59 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:41:00 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/menu/hook_menu_clear.h"

int				clear_menu(t_frc *frc)
{
	if (frc->mn.mb.h || frc->mn.jl.h || frc->mn.bs.h || frc->mn.tc.h ||
			frc->mn.qt.h || frc->mn.hd.h || frc->mn.rp.h || frc->mn.rd.h ||
			frc->mn.jk.h)
	{
		frc->mn.mb.h = 0;
		frc->mn.jl.h = 0;
		frc->mn.bs.h = 0;
		frc->mn.tc.h = 0;
		frc->mn.qt.h = 0;
		frc->mn.hd.h = 0;
		frc->mn.rp.h = 0;
		frc->mn.rd.h = 0;
		frc->mn.jk.h = 0;
		if (frc->mn.s)
			frc->mn.draw(frc);
	}
	return (0);
}
