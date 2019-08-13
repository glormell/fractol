/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_julia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:34:09 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:34:18 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/hook_julia.h"

int		is_toggle_julia_hook(int key)
{
	return (key == K_SPACE);
}

int		toggle_julia_hook(t_frc *frc)
{
	frc->mn.s = 0;
	frc->jl.unlocked = !frc->jl.unlocked;
	frc->cvs->draw(frc);
	return (0);
}

int		julia_hook(t_point2 p, t_frc *frc)
{
	if (!(frc->cvs))
		return (0);
	frc->jl.p.x += (double)p.x;
	frc->jl.p.y += (double)p.y;
	frc->jl.c = complex(frc->jl.p.x / (WIN_WIDTH / (frc->jl.max.r -
						frc->jl.min.r)) + frc->jl.min.r, frc->jl.p.y /
						(WIN_HEIGHT / (frc->jl.max.i - frc->jl.min.i)) +
						frc->jl.min.i);
	frc->cvs->draw(frc);
	return (1);
}
