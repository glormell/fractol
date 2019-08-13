/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_tricorn.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:59:46 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:00:58 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_TRICORN_H
# define DRAW_TRICORN_H
# include <pthread.h>
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"
# include "draw/draw_helpers.h"

typedef struct	s_lp_worker
{
	t_frc		*frc;
	t_point2d	from;
	t_point2d	to;
}				t_lp_worker;

int				draw_tricorn(t_frc *frc);
int				tricorn_init(t_frc *frc);

#endif
