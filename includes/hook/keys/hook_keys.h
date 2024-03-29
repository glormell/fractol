/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:03:25 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:03:34 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_KEYS_H
# define HOOK_KEYS_H
# include "hook/codes/hook_codes.h"
# include "hook/keys/hook_keys_quit.h"
# include "hook/keys/hook_keys_close.h"
# include "hook/keys/hook_keys_move.h"
# include "hook/keys/hook_keys_random.h"
# include "hook/keys/hook_keys_repair.h"
# include "hook/keys/hook_keys_select.h"
# include "hook/keys/hook_keys_menu.h"
# include "hook/hook_julia.h"
# include "draw/draw_helpers.h"

int				key_press(int key, t_frc *frc);
int				key_release(int key, t_frc *frc);

#endif
