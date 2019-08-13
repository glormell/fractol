/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:02:25 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:02:27 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "core/core_complex.h"

t_complex		*p_complex(double r, double i)
{
	t_complex	*complex;

	if (!(complex = (t_complex *)ft_memalloc(sizeof(t_complex))))
		return (0);
	complex->r = r;
	complex->i = i;
	return (complex);
}

t_complex		complex(double r, double i)
{
	return ((t_complex){ r, i });
}
