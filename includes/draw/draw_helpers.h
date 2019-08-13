/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_helpers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:59:07 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:59:13 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_HELPERS_H
# define DRAW_HELPERS_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"

int					clear(void *mlx, t_canvas *cvs);
void				put_pixel(t_frc *frc, t_point2 p, int c);
void				apply_zoom(t_frc *frc, t_complex m, double zoom);
int					select_canvas(t_frc *frc, t_canvas *cvs);

#endif
