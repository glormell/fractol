/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_julia.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:01:41 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:01:42 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_JULIA_H
# define HOOK_JULIA_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/codes/hook_codes.h"

int		is_toggle_julia_hook(int key);
int		toggle_julia_hook(t_frc *frc);
int		julia_hook(t_point2 p, t_frc *frc);

#endif
