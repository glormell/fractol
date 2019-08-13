#include "hook/menu/hook_menu.h"

static t_menu_button	*is_main_menu_hook(t_point2 p, t_frc *frc)
{
	t_menu				m;
	
	m = frc->mn;
	if (p.x > m.p.x + m.mb.p.x && p.x < m.p.x + m.mb.p.x + m.mb.s.x &&
		p.y > m.p.y + m.mb.p.y && p.y < m.p.y + m.mb.p.y + m.mb.s.y)
		return (&frc->mn.mb);
	else if (p.x > m.p.x + m.jl.p.x && p.x < m.p.x + m.jl.p.x + m.jl.s.x &&
			 p.y > m.p.y + m.jl.p.y && p.y < m.p.y + m.jl.p.y + m.jl.s.y)
		return (&frc->mn.jl);
	else if (p.x > m.p.x + m.bs.p.x && p.x < m.p.x + m.bs.p.x + m.bs.s.x &&
			 p.y > m.p.y + m.bs.p.y && p.y < m.p.y + m.bs.p.y + m.bs.s.y)
		return (&frc->mn.bs);
	return (0);
}

static t_menu_button	*is_mod_menu_hook(t_point2 p, t_frc *frc)
{
	t_menu				m;
	
	m = frc->mn;
	if (p.x > m.p.x + m.rp.p.x && p.x < m.p.x + m.rp.p.x + m.rp.s.x &&
		p.y > m.p.y + m.rp.p.y && p.y < m.p.y + m.rp.p.y + m.rp.s.y)
		return (&frc->mn.rp);
	else if (p.x > m.p.x + m.rd.p.x && p.x < m.p.x + m.rd.p.x + m.rd.s.x &&
			 p.y > m.p.y + m.rd.p.y && p.y < m.p.y + m.rd.p.y + m.rd.s.y)
		return (&frc->mn.rd);
	else if (p.x > m.p.x + m.jk.p.x && p.x < m.p.x + m.jk.p.x + m.jk.s.x &&
			 p.y > m.p.y + m.jk.p.y && p.y < m.p.y + m.jk.p.y + m.jk.s.y)
		return (&frc->mn.jk);
	return (0);
}

static t_menu_button	*is_action_menu_hook(t_point2 p, t_frc *frc)
{
	t_menu				m;
	
	m = frc->mn;
	if (p.x > m.p.x + m.qt.p.x && p.x < m.p.x + m.qt.p.x + m.qt.s.x &&
		p.y > m.p.y + m.qt.p.y && p.y < m.p.y + m.qt.p.y + m.qt.s.y)
		return (&frc->mn.qt);
	else if (p.x > m.p.x + m.hd.p.x && p.x < m.p.x + m.hd.p.x + m.hd.s.x &&
			 p.y > m.p.y + m.hd.p.y && p.y < m.p.y + m.hd.p.y + m.hd.s.y)
		return (&frc->mn.hd);
	return (0);
}

t_menu_button			*is_menu_hook(t_point2 p, t_frc *frc)
{
	t_menu_button		*r;
	
	if ((r = is_main_menu_hook(p, frc)))
		return (r);
	else if ((r = is_mod_menu_hook(p, frc)))
		return (r);
	else if ((r = is_action_menu_hook(p, frc)))
		return (r);
	return (0);
}

int						menu_hook(t_point2 p, int a, t_frc *frc)
{
	t_menu_button		*b;
	
	b = is_menu_hook(p, frc);
	a ? menu_click_hook(frc, b) : menu_hover_hook(frc, b);
	return (1);
}
