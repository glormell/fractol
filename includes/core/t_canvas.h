/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_canvas.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:54:01 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:54:03 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_CANVAS_H
# define T_CANVAS_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"

typedef struct	s_canvas
{
	void		*img;
	int			c;
	int			i;
	t_complex	min;
	t_complex	max;
	t_point2d	t;
	int			(*draw)(void *);
}				t_canvas;

#endif
