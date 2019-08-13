/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core_complex.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:53:24 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:55:28 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_COMPLEX_H
# define CORE_COMPLEX_H
# include "libft.h"

typedef struct	s_complex
{
	double		r;
	double		i;
}				t_complex;

t_complex		*p_complex(double r, double i);
t_complex		complex(double r, double i);

#endif
