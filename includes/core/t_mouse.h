/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_mouse.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:54:30 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:54:31 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MOUSE_H
# define T_MOUSE_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"

typedef struct	s_mouse
{
	t_point2	p;
	int			l;
	int			m;
	int			r;
}				t_mouse;

#endif
