/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_menu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:19:26 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:21:06 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void				draw_button(t_frc *frc, t_menu_button b)
{
	t_point2		p;

	p = point2(b.p.x + 1, b.p.y + 1);
	while (p.y < b.p.y + b.s.y)
	{
		p.x = b.p.x + 1;
		while (p.x < b.p.x + b.s.x)
		{
			if (b.d)
				put_menu_pixel(frc, p, b.d_color);
			else if (b.a)
				put_menu_pixel(frc, p, b.h ? b.h_color : b.a_color);
			else
				put_menu_pixel(frc, p, b.h ? b.h_color : b.color);
			p.x++;
		}
		p.y++;
	}
}

void				draw_button_text(t_frc *frc, t_menu_button b)
{
	mlx_string_put(frc->mlx, frc->win, frc->mn.p.x + b.p.x + b.tp.x,
					frc->mn.p.y + b.p.y + b.tp.y, b.tc, b.t);
}

int					draw_menu(t_frc *frc)
{
	draw_button(frc, frc->mn.mb);
	draw_button(frc, frc->mn.jl);
	draw_button(frc, frc->mn.bs);
	draw_button(frc, frc->mn.tc);
	draw_button(frc, frc->mn.qt);
	draw_button(frc, frc->mn.hd);
	draw_button(frc, frc->mn.rp);
	draw_button(frc, frc->mn.rd);
	draw_button(frc, frc->mn.jk);
	mlx_put_image_to_window(frc->mlx, frc->win,
							frc->mn.img, frc->mn.p.x, frc->mn.p.y);
	draw_button_text(frc, frc->mn.mb);
	draw_button_text(frc, frc->mn.jl);
	draw_button_text(frc, frc->mn.bs);
	draw_button_text(frc, frc->mn.tc);
	draw_button_text(frc, frc->mn.qt);
	draw_button_text(frc, frc->mn.hd);
	draw_button_text(frc, frc->mn.rp);
	draw_button_text(frc, frc->mn.rd);
	draw_button_text(frc, frc->mn.jk);
	return (0);
}
