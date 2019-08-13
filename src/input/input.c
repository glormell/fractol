/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:43:07 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:43:09 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "input/input.h"

int		input_init(char *type)
{
	if ((ft_strcmp(type, "Mandelbrot")) == 0)
		return (1);
	else if ((ft_strcmp(type, "Julia")) == 0)
		return (2);
	else if ((ft_strcmp(type, "Burningship")) == 0)
		return (3);
	else if ((ft_strcmp(type, "Tricorn")) == 0)
		return (4);
	return (0);
}
