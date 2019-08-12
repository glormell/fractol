#include "menu/menu_main.h"

static int main_menu_mandelbrot(t_frc *frc)
{
	frc->mn.mb.p = point2(0, 0);
	frc->mn.mb.s = point2(MENU_WIDTH, 40);
	frc->mn.mb.t = "Mandelbrot [1]";
	frc->mn.mb.tp = point2(5, 0);
	frc->mn.mb.tc = 0xffffff;
	frc->mn.mb.h = 0;
	frc->mn.mb.a = 0;
	frc->mn.mb.color = 0x00babc;
	frc->mn.mb.h_color = 0x008889;
	frc->mn.mb.a_color = 0x008889;
	return (1);
}

static int main_menu_julia(t_frc *frc)
{
	frc->mn.jl.p = point2(0, 40);
	frc->mn.jl.s = point2(MENU_WIDTH, 40);
	frc->mn.jl.t = "Julia [2]";
	frc->mn.jl.tp = point2(5, 0);
	frc->mn.jl.tc = 0xffffff;
	frc->mn.jl.h = 0;
	frc->mn.jl.a = 0;
	frc->mn.jl.color = 0x00babc;
	frc->mn.jl.h_color = 0x008889;
	frc->mn.jl.a_color = 0x008889;
	return (1);
}

static int main_menu_burningship(t_frc *frc)
{
	frc->mn.bs.p = point2(0, 80);
	frc->mn.bs.s = point2(MENU_WIDTH, 40);
	frc->mn.bs.t = "Burning Ship [3]";
	frc->mn.bs.tp = point2(5, 0);
	frc->mn.bs.tc = 0xffffff;
	frc->mn.bs.h = 0;
	frc->mn.bs.a = 0;
	frc->mn.bs.color = 0x00babc;
	frc->mn.bs.h_color = 0x008889;
	frc->mn.bs.a_color = 0x008889;
	return (1);
}

int		main_menu_init(t_frc *frc)
{
	main_menu_mandelbrot(frc);
	main_menu_julia(frc);
	main_menu_burningship(frc);
	return (1);
}
