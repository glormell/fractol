/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_move.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:03:55 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:05:14 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_KEYS_MOVE_H
# define HOOK_KEYS_MOVE_H
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"
# include "hook/hook_translate.h"

int		is_move_keys(int key);
int		move_keys_hook(int key, t_frc *frc);

#endif
