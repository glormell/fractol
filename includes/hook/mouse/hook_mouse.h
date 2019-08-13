/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:07:10 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:07:13 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_MOUSE_H
# define HOOK_MOUSE_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/codes/mouse_codes.h"
# include "hook/hook_translate.h"
# include "hook/hook_julia.h"
# include "hook/menu/hook_menu.h"
# include "hook/menu/hook_menu_clear.h"
# include "hook/mouse/hook_mouse_zoom.h"

t_point2	canvas_mouse(t_frc *frc);
int			mouse_press(int button, int x, int y, t_frc *frc);
int			mouse_release(int button, int x, int y, t_frc *frc);
int			mouse_move(int x, int y, t_frc *frc);

#endif
