/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_menu.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:03:49 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:04:32 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_KEYS_MENU_H
# define HOOK_KEYS_MENU_H
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"
# include "draw/draw_helpers.h"

int		is_menu_keys(int key);
int		menu_keys_hook(t_frc *frc);

#endif
