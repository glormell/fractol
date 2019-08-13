/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:41:55 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:42:38 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/mouse/hook_mouse.h"

int				mouse_press(int button, int x, int y, t_frc *frc)
{
	if (x <= 0 || y <= 0 || x >= WIN_WIDTH || y >= WIN_HEIGHT)
		return (0);
	if (frc->mn.s && is_menu_hook(point2(x, y), frc))
		return (0);
	if (is_mouse_zoom(button))
		zoom_mouse_hook(button, point2d(x, y), frc);
	else if (button == M_LEFT)
		frc->ms.l = 1;
	else if (button == M_MIDDLE)
		frc->ms.m = 1;
	else if (button == M_RIGHT)
		frc->ms.r = 1;
	return (0);
}

int				mouse_release(int button, int x, int y, t_frc *frc)
{
	if (x <= 0 || y <= 0 || x >= WIN_WIDTH || y >= WIN_HEIGHT)
		return (0);
	if (frc->mn.s && is_menu_hook(point2(x, y), frc))
		return (menu_hook(point2(x, y), button == M_LEFT ? 1 : 2, frc));
	if (button == M_LEFT)
		frc->ms.l = 0;
	else if (button == M_MIDDLE)
		frc->ms.m = 0;
	else if (button == M_RIGHT)
		frc->ms.r = 0;
	return (0);
}

int				mouse_move(int x, int y, t_frc *frc)
{
	if (frc->mn.s && is_menu_hook(point2(x, y), frc))
		return (menu_hook(point2(x, y), 0, frc));
	else
		clear_menu(frc);
	if (frc->ms.l)
		translate_hook(point2((frc->ms.p.x - x), (frc->ms.p.y - y)), frc);
	else if (frc->cvs == &frc->jl.cvs && (frc->jl.unlocked || frc->ms.r))
		julia_hook(point2((frc->ms.p.x - x), (frc->ms.p.y - y)), frc);
	frc->ms.p = point2(x, y);
	return (0);
}
