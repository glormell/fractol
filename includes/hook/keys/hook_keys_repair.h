/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_repair.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:04:09 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:05:47 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_KEYS_REPAIR_H
# define HOOK_KEYS_REPAIR_H
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"
# include "draw/draw_mandelbrot.h"
# include "draw/draw_julia.h"
# include "draw/draw_burningship.h"
# include "draw/draw_tricorn.h"

int		is_repair_keys(int key);
int		repair_keys_hook(t_frc *frc);

#endif
