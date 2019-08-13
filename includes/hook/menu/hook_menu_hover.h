/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu_hover.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:06:30 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:06:36 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_MENU_HOVER_H
# define HOOK_MENU_HOVER_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/menu/hook_menu.h"

int				menu_hover_hook(t_frc *frc, t_menu_button *b);

#endif
