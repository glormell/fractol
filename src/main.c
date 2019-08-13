/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:43:23 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:43:50 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int			main(int argc, char **argv)
{
	void	*mlx;
	int		win_count;
	t_frc	*frc[argc == 1 ? 1 : argc - 1];

	win_count = argc == 1 ? 1 : argc - 1;
	if (!(mlx = mlx_init()))
		exit(0);
	if (argc == 1)
		if (!(frc[argc] = p_frc(mlx, &win_count, "")))
			exit(0);
	while (--argc)
		if (!(frc[argc] = p_frc(mlx, &win_count, argv[argc])))
			exit(0);
	mlx_loop(mlx);
	return (0);
}
