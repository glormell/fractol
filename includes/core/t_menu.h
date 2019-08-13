/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_menu.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glormell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:54:24 by glormell          #+#    #+#             */
/*   Updated: 2019/08/13 17:54:26 by glormell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MENU_H
# define T_MENU_H
# include "core/core_point.h"

typedef struct		s_menu_button
{
	t_point2		p;
	t_point2		s;
	char			*t;
	t_point2		tp;
	int				tc;
	int				h;
	int				a;
	int				d;
	int				color;
	int				h_color;
	int				a_color;
	int				d_color;
}					t_menu_button;

typedef struct		s_menu
{
	void			*img;
	int				s;
	t_point2		p;
	t_menu_button	mb;
	t_menu_button	jl;
	t_menu_button	bs;
	t_menu_button	tc;
	t_menu_button	rp;
	t_menu_button	rd;
	t_menu_button	jk;
	t_menu_button	qt;
	t_menu_button	hd;
	int				(*draw)(void *);
}					t_menu;

#endif
