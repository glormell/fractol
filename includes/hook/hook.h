/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:01:24 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:01:25 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_H
# define HOOK_H
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/keys/hook_keys.h"
# include "hook/mouse/hook_mouse.h"

int		hook_init(t_frc *frc);

#endif
