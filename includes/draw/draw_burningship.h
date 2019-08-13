/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_burningship.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:58:59 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 18:00:12 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAW_BURNINGSHIP_H
# define DRAW_BURNINGSHIP_H
# include <pthread.h>
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"
# include "draw/draw_helpers.h"

typedef struct	s_bs_worker
{
	t_frc		*frc;
	t_point2d	from;
	t_point2d	to;
}				t_bs_worker;

int				draw_burningship(t_frc *frc);
int				burningship_init(t_frc *frc);

#endif
