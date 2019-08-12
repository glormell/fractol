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
	int				color;
	int				h_color;
	int				a_color;
}					t_menu_button;

typedef struct		s_menu
{
	void			*img;
	int				s;
	t_point2		p;
	t_menu_button	mb;
	t_menu_button	jl;
	t_menu_button	bs;
	t_menu_button	q;
	t_menu_button	h;
	int				(*draw)(void *);
}					t_menu;

#endif
