#include "hook/hook_menu.h"

int				is_menu_hook(t_point2 p, t_frc *frc)
{
	t_menu		m;
	
	m = frc->mn;
	if (p.x > m.p.x + m.mb.p.x && p.x < m.p.x + m.mb.p.x + m.mb.s.x &&
		p.y > m.p.y + m.mb.p.y && p.y < m.p.y + m.mb.p.y + m.mb.s.y)
		return (1);
	else if (p.x > m.p.x + m.jl.p.x && p.x < m.p.x + m.jl.p.x + m.jl.s.x &&
			 p.y > m.p.y + m.jl.p.y && p.y < m.p.y + m.jl.p.y + m.jl.s.y)
		return (2);
	else if (p.x > m.p.x + m.bs.p.x && p.x < m.p.x + m.bs.p.x + m.bs.s.x &&
			 p.y > m.p.y + m.bs.p.y && p.y < m.p.y + m.bs.p.y + m.bs.s.y)
		return (3);
	else if (p.x > m.p.x + m.q.p.x && p.x < m.p.x + m.q.p.x + m.q.s.x &&
			 p.y > m.p.y + m.q.p.y && p.y < m.p.y + m.q.p.y + m.q.s.y)
		return (4);
	else if (p.x > m.p.x + m.h.p.x && p.x < m.p.x + m.h.p.x + m.h.s.x &&
			 p.y > m.p.y + m.h.p.y && p.y < m.p.y + m.h.p.y + m.h.s.y)
		return (5);
	return (0);
}

int				clear_menu(t_frc *frc)
{
	if (frc->mn.mb.h || frc->mn.jl.h ||
		 frc->mn.bs.h || frc->mn.q.h || frc->mn.h.h)
	{
		frc->mn.mb.h = 0;
		frc->mn.jl.h = 0;
		frc->mn.bs.h = 0;
		frc->mn.q.h = 0;
		frc->mn.h.h = 0;
		if (frc->mn.s)
			frc->mn.draw(frc);
	}
	return (0);
}

int				hover_menu(t_frc *frc, t_menu_button *b)
{
	frc->mn.mb.h = b == &frc->mn.mb ? 1 : 0;
	frc->mn.jl.h = b == &frc->mn.jl ? 1 : 0;
	frc->mn.bs.h = b == &frc->mn.bs ? 1 : 0;
	frc->mn.q.h = b == &frc->mn.q ? 1 : 0;
	frc->mn.h.h = b == &frc->mn.h ? 1 : 0;
	frc->mn.draw(frc);
	return (0);
}

int				menu_click_hook(t_point2 p, int button, t_frc *frc)
{
	int			t;

	t = is_menu_hook(p, frc);
	if (button == M_LEFT)
	{
		if (t == 1)
			select_keys_hook(K_1, frc);
		else if (t == 2)
			select_keys_hook(K_2, frc);
		else if (t == 3)
			select_keys_hook(K_3, frc);
		else if (t == 4)
			quit_keys_hook(frc);
		else if (t == 5)
			menu_keys_hook(frc);
	}
	return (0);
}

int				menu_hook(t_point2 p, t_frc *frc)
{
	int			t;
	
	t = is_menu_hook(p, frc);
	if (t == 1)
		hover_menu(frc, &frc->mn.mb);
	else if (t == 2)
		hover_menu(frc, &frc->mn.jl);
	else if (t == 3)
		hover_menu(frc, &frc->mn.bs);
	else if (t == 4)
		hover_menu(frc, &frc->mn.q);
	else if (t == 5)
		hover_menu(frc, &frc->mn.h);
	return (1);
}
