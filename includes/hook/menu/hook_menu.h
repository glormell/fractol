/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:06:07 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:06:08 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_MENU_H
# define HOOK_MENU_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/codes/hook_codes.h"
# include "hook/codes/mouse_codes.h"
# include "hook/keys/hook_keys_quit.h"
# include "hook/keys/hook_keys_menu.h"
# include "hook/menu/hook_menu_hover.h"
# include "hook/menu/hook_menu_click.h"

t_menu_button	*is_menu_hook(t_point2 p, t_frc *frc);
int				menu_hook(t_point2 p, int a, t_frc *frc);

#endif
