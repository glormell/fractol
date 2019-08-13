/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hook_keys_random.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:35:35 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:37:39 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hook/keys/hook_keys_random.h"

int		is_random_keys(int key)
{
	return (key == K_F);
}

int		random_keys_hook(t_frc *frc)
{
	int	color;
	int	i;

	if (!(frc->cvs))
		return (0);
	color = 0;
	i = 24;
	srand(time(0));
	while (i != 0)
	{
		i -= 8;
		color += color % 2 ? 0 : ((unsigned char)(rand() % 30) << i);
	}
	frc->cvs->c = frc->cvs->c == color ? (color << 8) | (color >> 16) : color;
	frc->cvs->draw(frc);
	return (1);
}
