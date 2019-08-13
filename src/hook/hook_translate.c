/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_translate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:34:47 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:34:50 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_translate.h"

int		left_hook(t_frc *frc)
{
	return (translate_hook(point2(-10, 0), frc));
}

int		right_hook(t_frc *frc)
{
	return (translate_hook(point2(10, 0), frc));
}

int		top_hook(t_frc *frc)
{
	return (translate_hook(point2(0, -10), frc));
}

int		bottom_hook(t_frc *frc)
{
	return (translate_hook(point2(0, 10), frc));
}

int		translate_hook(t_point2 p, t_frc *frc)
{
	if (!(frc->cvs))
		return (0);
	frc->cvs->t.x += fabs(frc->cvs->max.r - frc->cvs->min.r) * p.x * 0.0008;
	frc->cvs->t.y += fabs(frc->cvs->max.i - frc->cvs->min.i) * p.y * 0.0013;
	frc->cvs->draw(frc);
	return (1);
}
