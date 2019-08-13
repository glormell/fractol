/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_menu.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:59:36 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:59:39 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_MENU_H
# define DRAW_MENU_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/t_menu.h"
# include "core/core_point.h"
# include "draw/draw_helpers.h"

int		draw_menu(t_frc *frc);
int		menu_init(t_frc *frc);

#endif
