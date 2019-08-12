#include "draw/draw_menu.h"

void				put_menu_pixel(t_frc *frc, t_point2 p, int c)
{
	char			*canvas_data;
	int				bits;
	int				pos;
	unsigned int	color;

	if (!(frc->menu.img))
		frc->menu.img = mlx_new_image(frc->mlx, MENU_WIDTH, MENU_HEIGHT);
	canvas_data = mlx_get_data_addr(frc->menu.img, &bits, &pos, &pos);
	color = mlx_get_color_value(frc->mlx, c);
	pos = MENU_WIDTH * (bits / 8) * p.y + p.x * (bits / 8);
	*((unsigned int *)(canvas_data + pos)) = color;
}

void	draw_button(t_frc *frc, t_menu_button b)
{
	t_point2	p;
	
	p = point2(b.p.x + 1, b.p.y + 1);
	while (p.y < b.p.y + b.s.y)
	{
		p.x = b.p.x + 1;
		while (p.x < b.p.x + b.s.x)
		{
			if (b.a)
				put_menu_pixel(frc, p, b.h ? b.h_color : b.a_color);
			else
				put_menu_pixel(frc, p, b.h ? b.h_color : b.color);
			p.x++;
		}
		p.y++;
	}
}

void	draw_button_text(t_frc *frc, t_menu_button b)
{
	mlx_string_put(frc->mlx, frc->win, frc->menu.p.x + b.p.x + b.tp.x,
				   frc->menu.p.y + b.p.y + b.tp.y, b.tc, b.t);
}

int		draw_menu(t_frc *frc)
{
	draw_button(frc, frc->menu.mb);
	draw_button(frc, frc->menu.jl);
	draw_button(frc, frc->menu.bs);
	draw_button(frc, frc->menu.q);
	draw_button(frc, frc->menu.h);
	mlx_put_image_to_window(frc->mlx, frc->win,
							frc->menu.img, frc->menu.p.x, frc->menu.p.y);
	draw_button_text(frc, frc->menu.mb);
	draw_button_text(frc, frc->menu.jl);
	draw_button_text(frc, frc->menu.bs);
	draw_button_text(frc, frc->menu.q);
	draw_button_text(frc, frc->menu.h);
	return (0);
}

int		menu_init(t_frc *frc)
{
	frc->menu.s = 1;
	frc->menu.p = point2(20, 20);
	frc->menu.draw = (int (*)(void *))draw_menu;
	
	frc->menu.mb.p = point2(0, 0);
	frc->menu.mb.s = point2(MENU_WIDTH, 40);
	frc->menu.mb.t = "Mandelbrot";
	frc->menu.mb.tp = point2(5, 0);
	frc->menu.mb.tc = 0xffffff;
	frc->menu.mb.h = 0;
	frc->menu.mb.a = 0;
	frc->menu.mb.color = 0x00babc;
	frc->menu.mb.h_color = 0x008889;
	frc->menu.mb.a_color = 0x008889;
	
	frc->menu.jl.p = point2(0, 40);
	frc->menu.jl.s = point2(MENU_WIDTH, 40);
	frc->menu.jl.t = "Julia";
	frc->menu.jl.tp = point2(5, 0);
	frc->menu.jl.tc = 0xffffff;
	frc->menu.jl.h = 0;
	frc->menu.jl.a = 0;
	frc->menu.jl.color = 0x00babc;
	frc->menu.jl.h_color = 0x008889;
	frc->menu.jl.a_color = 0x008889;
	
	frc->menu.bs.p = point2(0, 80);
	frc->menu.bs.s = point2(MENU_WIDTH, 40);
	frc->menu.bs.t = "Burning Ship";
	frc->menu.bs.tp = point2(5, 0);
	frc->menu.bs.tc = 0xffffff;
	frc->menu.bs.h = 0;
	frc->menu.bs.a = 0;
	frc->menu.bs.color = 0x00babc;
	frc->menu.bs.h_color = 0x008889;
	frc->menu.bs.a_color = 0x008889;
	
	frc->menu.q.p = point2(0, 120);
	frc->menu.q.s = point2(MENU_WIDTH / 2, 40);
	frc->menu.q.t = "Quit";
	frc->menu.q.tp = point2(5, 0);
	frc->menu.q.tc = 0xffffff;
	frc->menu.q.h = 0;
	frc->menu.q.a = 0;
	frc->menu.q.color = 0xED8179;
	frc->menu.q.h_color = 0xda5a51;
	frc->menu.q.a_color = 0xda5a51;
	
	frc->menu.h.p = point2(MENU_WIDTH / 2, 120);
	frc->menu.h.s = point2(MENU_WIDTH / 2, 40);
	frc->menu.h.t = "Hide";
	frc->menu.h.tp = point2(5, 0);
	frc->menu.h.tc = 0xffffff;
	frc->menu.h.h = 0;
	frc->menu.h.a = 0;
	frc->menu.h.color = 0xc0c0c0;
	frc->menu.h.h_color = 0xaaaaaa;
	frc->menu.h.a_color = 0xaaaaaa;
	return (1);
}
