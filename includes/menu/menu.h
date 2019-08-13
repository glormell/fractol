/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:07:52 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:07:55 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MENU_H
# define MENU_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/t_menu.h"
# include "core/core_point.h"
# include "draw/draw_helpers.h"
# include "draw/draw_menu.h"
# include "menu/menu_main.h"
# include "menu/menu_mod.h"
# include "menu/menu_action.h"

int		menu_init(t_frc *frc);

#endif
