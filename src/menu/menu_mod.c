#include "menu/menu_mod.h"

static int	mod_menu_quit(t_frc *frc)
{
	frc->mn.q.p = point2(0, 120);
	frc->mn.q.s = point2(MENU_WIDTH / 2, 40);
	frc->mn.q.t = "Quit [Q]";
	frc->mn.q.tp = point2(5, 0);
	frc->mn.q.tc = 0xffffff;
	frc->mn.q.h = 0;
	frc->mn.q.a = 0;
	frc->mn.q.color = 0xED8179;
	frc->mn.q.h_color = 0xda5a51;
	frc->mn.q.a_color = 0xda5a51;
	return (1);
}

static int	mod_menu_hide(t_frc *frc)
{
	frc->mn.h.p = point2(MENU_WIDTH / 2, 120);
	frc->mn.h.s = point2(MENU_WIDTH / 2, 40);
	frc->mn.h.t = "Hide [M]";
	frc->mn.h.tp = point2(5, 0);
	frc->mn.h.tc = 0xffffff;
	frc->mn.h.h = 0;
	frc->mn.h.a = 0;
	frc->mn.h.color = 0xc0c0c0;
	frc->mn.h.h_color = 0xaaaaaa;
	frc->mn.h.a_color = 0xaaaaaa;
	return (1);
}

int			mod_menu_init(t_frc *frc)
{
	mod_menu_quit(frc);
	mod_menu_hide(frc);
	return (1);
}
