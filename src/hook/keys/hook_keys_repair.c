/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_repair.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:35:39 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:38:16 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/keys/hook_keys_repair.h"

int		is_repair_keys(int key)
{
	return (key == K_R);
}

int		repair_keys_hook(t_frc *frc)
{
	if (!(frc->cvs))
		return (0);
	if (frc->cvs == &frc->mb.cvs)
		mandelbrot_init(frc);
	if (frc->cvs == &frc->jl.cvs)
		julia_init(frc);
	if (frc->cvs == &frc->bs.cvs)
		burningship_init(frc);
	if (frc->cvs == &frc->tc.cvs)
		tricorn_init(frc);
	frc->cvs->draw(frc);
	return (0);
}
