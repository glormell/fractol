/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_menu_click.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:06:20 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:06:51 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_MENU_CLICK_H
# define HOOK_MENU_CLICK_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/keys/hook_keys_repair.h"
# include "hook/keys/hook_keys_random.h"
# include "hook/keys/hook_keys_select.h"
# include "hook/hook_julia.h"
# include "hook/menu/hook_menu.h"

int				menu_click_hook(t_frc *frc, t_menu_button *b);

#endif
