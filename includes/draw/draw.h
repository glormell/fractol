/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:58:44 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:58:45 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_H
# define DRAW_H
# include "core/t_frc.h"
# include "draw/draw_helpers.h"
# include "draw/draw_mandelbrot.h"
# include "draw/draw_julia.h"
# include "draw/draw_burningship.h"
# include "draw/draw_tricorn.h"
# include "draw/draw_menu.h"
# include "menu/menu.h"
# include "input/input.h"

int		draw_init(t_frc *frc, char *type);

#endif
