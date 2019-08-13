/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:08:07 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:08:15 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw/draw.h"

int			draw_init(t_frc *frc, char *type)
{
	int		t;

	if (!(mandelbrot_init(frc)) ||
		!(julia_init(frc)) ||
		!(burningship_init(frc)) ||
		!(tricorn_init(frc)) ||
		!(menu_init(frc)))
		return (0);
	t = input_init(type);
	if (t == 1)
		select_canvas(frc, &frc->mb.cvs);
	if (t == 2)
		select_canvas(frc, &frc->jl.cvs);
	if (t == 3)
		select_canvas(frc, &frc->bs.cvs);
	if (t == 4)
		select_canvas(frc, &frc->tc.cvs);
	if (t == 0)
		frc->mn.draw(frc);
	if (t)
		frc->cvs->draw(frc);
	return (1);
}
