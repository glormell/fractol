/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_julia.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:54:14 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:58:00 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_JULIA_H
# define T_JULIA_H
# include "core/t_canvas.h"
# include "core/core_complex.h"

typedef struct	s_julia
{
	t_canvas	cvs;
	t_point2d	p;
	t_complex	c;
	t_complex	min;
	t_complex	max;
	int			unlocked;
}				t_julia;

#endif
