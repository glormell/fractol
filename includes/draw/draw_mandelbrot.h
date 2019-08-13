/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_mandelbrot.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:59:31 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:00:51 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_MANDELBROT_H
# define DRAW_MANDELBROT_H
# include <pthread.h>
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"
# include "draw/draw_helpers.h"

typedef struct	s_mb_worker
{
	t_frc		*frc;
	t_point2d	from;
	t_point2d	to;
}				t_mb_worker;

int				draw_mandelbrot(t_frc *frc);
int				mandelbrot_init(t_frc *frc);

#endif
