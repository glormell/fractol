/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_mouse_zoom.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 18:07:18 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:07:18 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOOK_MOUSE_ZOOM_H
# define HOOK_MOUSE_ZOOM_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"
# include "hook/codes/mouse_codes.h"
# include "draw/draw_helpers.h"

int				is_mouse_zoom(int button);
int				zoom_mouse_hook(int button, t_point2d p, t_frc *frc);

#endif
