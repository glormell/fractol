#include "draw/draw_menu.h"

void				put_menu_pixel(t_frc *frc, t_point2 p, int c)
{
	char			*canvas_data;
	int				bits;
	int				pos;
	unsigned int	color;

	if (!(frc->mn.img))
		frc->mn.img = mlx_new_image(frc->mlx, MENU_WIDTH, MENU_HEIGHT);
	canvas_data = mlx_get_data_addr(frc->mn.img, &bits, &pos, &pos);
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
	mlx_string_put(frc->mlx, frc->win, frc->mn.p.x + b.p.x + b.tp.x,
				   frc->mn.p.y + b.p.y + b.tp.y, b.tc, b.t);
}

int		draw_menu(t_frc *frc)
{
	draw_button(frc, frc->mn.mb);
	draw_button(frc, frc->mn.jl);
	draw_button(frc, frc->mn.bs);
	draw_button(frc, frc->mn.q);
	draw_button(frc, frc->mn.h);
	mlx_put_image_to_window(frc->mlx, frc->win,
							frc->mn.img, frc->mn.p.x, frc->mn.p.y);
	draw_button_text(frc, frc->mn.mb);
	draw_button_text(frc, frc->mn.jl);
	draw_button_text(frc, frc->mn.bs);
	draw_button_text(frc, frc->mn.q);
	draw_button_text(frc, frc->mn.h);
	return (0);
}

int		menu_init(t_frc *frc)
{
	frc->mn.s = 1;
	frc->mn.p = point2(20, 20);
	frc->mn.draw = (int (*)(void *))draw_menu;
	
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
	
	frc->mn.q.p = point2(0, 120);
	frc->mn.q.s = point2(MENU_WIDTH / 2, 40);
	frc->mn.q.t = "Quit [Q]";
	frc->mn.q.tp = point2(5, 0);
	frc->mn.q.tc = 0xffffff;
	frc->mn.q.h = 0;
	frc->mn.q.a = 0;
	frc->mn.q.color = 0xED8179;
	frc->mn.q.h_color = 0xda5a51;
	frc->mn.q.a_color = 0xda5a51;
	
	frc->mn.h.p = point2(MENU_WIDTH / 2, 120);
	frc->mn.h.s = point2(MENU_WIDTH / 2, 40);
	frc->mn.h.t = "Hide [M]";
	frc->mn.h.tp = point2(5, 0);
	frc->mn.h.tc = 0xffffff;
	frc->mn.h.h = 0;
	frc->mn.h.a = 0;
	frc->mn.h.color = 0xc0c0c0;
	frc->mn.h.h_color = 0xaaaaaa;
	frc->mn.h.a_color = 0xaaaaaa;
	return (1);
}
