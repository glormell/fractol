#include "hook/hook_menu.h"

int				is_menu_hook(t_point2 p, t_frc *frc)
{
	t_point2	mp;

	mp = frc->menu.p;
	return (p.x > mp.x && p.x < mp.x + MENU_WIDTH &&
			p.y > mp.y && p.y < mp.y + MENU_HEIGHT);
}

int				clear_menu(t_frc *frc)
{
	if (frc->menu.mb.h || frc->menu.jl.h ||
		 frc->menu.bs.h || frc->menu.q.h || frc->menu.h.h)
	{
		frc->menu.mb.h = 0;
		frc->menu.jl.h = 0;
		frc->menu.bs.h = 0;
		frc->menu.q.h = 0;
		frc->menu.h.h = 0;
		frc->menu.draw(frc);
	}
	return (0);
}

int				hover_menu(t_frc *frc, t_menu_button *b)
{
	frc->menu.mb.h = b == &frc->menu.mb ? 1 : 0;
	frc->menu.jl.h = b == &frc->menu.jl ? 1 : 0;
	frc->menu.bs.h = b == &frc->menu.bs ? 1 : 0;
	frc->menu.q.h = b == &frc->menu.q ? 1 : 0;
	frc->menu.h.h = b == &frc->menu.h ? 1 : 0;
	frc->menu.draw(frc);
	return (0);
}

int				menu_hook(t_point2 p, t_frc *frc)
{
	t_menu		m;

	m = frc->menu;
	if (p.x > m.p.x + m.mb.p.x && p.x < m.p.x + m.mb.p.x + m.mb.s.x &&
		p.y > m.p.y + m.mb.p.y && p.y < m.p.y + m.mb.p.y + m.mb.s.y)
		hover_menu(frc, &frc->menu.mb);
	else if (p.x > m.p.x + m.jl.p.x && p.x < m.p.x + m.jl.p.x + m.jl.s.x &&
			 p.y > m.p.y + m.jl.p.y && p.y < m.p.y + m.jl.p.y + m.jl.s.y)
		hover_menu(frc, &frc->menu.jl);
	else if (p.x > m.p.x + m.bs.p.x && p.x < m.p.x + m.bs.p.x + m.bs.s.x &&
		p.y > m.p.y + m.bs.p.y && p.y < m.p.y + m.bs.p.y + m.bs.s.y)
		hover_menu(frc, &frc->menu.bs);
	else if (p.x > m.p.x + m.q.p.x && p.x < m.p.x + m.q.p.x + m.q.s.x &&
		p.y > m.p.y + m.q.p.y && p.y < m.p.y + m.q.p.y + m.q.s.y)
		hover_menu(frc, &frc->menu.q);
	else if (p.x > m.p.x + m.h.p.x && p.x < m.p.x + m.h.p.x + m.h.s.x &&
		p.y > m.p.y + m.h.p.y && p.y < m.p.y + m.h.p.y + m.h.s.y)
		hover_menu(frc, &frc->menu.h);
	return (1);
}
