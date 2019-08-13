/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:44:28 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:45:48 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "menu/menu_main.h"

static int	main_menu_mandelbrot(t_frc *frc)
{
	frc->mn.mb.p = point2(0, 0);
	frc->mn.mb.s = point2(MENU_WIDTH, BTN_HEIGHT);
	frc->mn.mb.t = "Mandelbrot";
	frc->mn.mb.tp = point2(5, 0);
	frc->mn.mb.tc = 0xffffff;
	frc->mn.mb.h = 0;
	frc->mn.mb.a = 0;
	frc->mn.mb.d = 0;
	frc->mn.mb.color = 0x00babc;
	frc->mn.mb.h_color = 0x008889;
	frc->mn.mb.a_color = 0x008889;
	frc->mn.mb.d_color = 0xaaaaaa;
	return (1);
}

static int	main_menu_julia(t_frc *frc)
{
	frc->mn.jl.p = point2(0, BTN_HEIGHT);
	frc->mn.jl.s = point2(MENU_WIDTH, BTN_HEIGHT);
	frc->mn.jl.t = "Julia";
	frc->mn.jl.tp = point2(5, 0);
	frc->mn.jl.tc = 0xffffff;
	frc->mn.jl.h = 0;
	frc->mn.jl.a = 0;
	frc->mn.jl.d = 0;
	frc->mn.jl.color = 0x00babc;
	frc->mn.jl.h_color = 0x008889;
	frc->mn.jl.a_color = 0x008889;
	frc->mn.jl.d_color = 0xaaaaaa;
	return (1);
}

static int	main_menu_burningship(t_frc *frc)
{
	frc->mn.bs.p = point2(0, BTN_HEIGHT * 2);
	frc->mn.bs.s = point2(MENU_WIDTH, BTN_HEIGHT);
	frc->mn.bs.t = "Burning Ship";
	frc->mn.bs.tp = point2(5, 0);
	frc->mn.bs.tc = 0xffffff;
	frc->mn.bs.h = 0;
	frc->mn.bs.a = 0;
	frc->mn.bs.d = 0;
	frc->mn.bs.color = 0x00babc;
	frc->mn.bs.h_color = 0x008889;
	frc->mn.bs.a_color = 0x008889;
	frc->mn.bs.d_color = 0xaaaaaa;
	return (1);
}

static int	main_menu_tricorn(t_frc *frc)
{
	frc->mn.tc.p = point2(0, BTN_HEIGHT * 3);
	frc->mn.tc.s = point2(MENU_WIDTH, BTN_HEIGHT);
	frc->mn.tc.t = "Tricorn";
	frc->mn.tc.tp = point2(5, 0);
	frc->mn.tc.tc = 0xffffff;
	frc->mn.tc.h = 0;
	frc->mn.tc.a = 0;
	frc->mn.tc.d = 0;
	frc->mn.tc.color = 0x00babc;
	frc->mn.tc.h_color = 0x008889;
	frc->mn.tc.a_color = 0x008889;
	frc->mn.tc.d_color = 0xaaaaaa;
	return (1);
}

int			main_menu_init(t_frc *frc)
{
	main_menu_mandelbrot(frc);
	main_menu_julia(frc);
	main_menu_burningship(frc);
	main_menu_tricorn(frc);
	return (1);
}
