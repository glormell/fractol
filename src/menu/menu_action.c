#include "menu/menu_action.h"

static int	action_menu_quit(t_frc *frc)
{
	frc->mn.qt.p = point2(0, 160);
	frc->mn.qt.s = point2(MENU_WIDTH / 2, 40);
	frc->mn.qt.t = "Quit";
	frc->mn.qt.tp = point2(5, 0);
	frc->mn.qt.tc = 0xffffff;
	frc->mn.qt.h = 0;
	frc->mn.qt.a = 0;
	frc->mn.qt.d = 0;
	frc->mn.qt.color = 0xED8179;
	frc->mn.qt.h_color = 0xda5a51;
	frc->mn.qt.a_color = 0xda5a51;
	frc->mn.qt.d_color = 0xaaaaaa;
	return (1);
}

static int	action_menu_hide(t_frc *frc)
{
	frc->mn.hd.p = point2(MENU_WIDTH / 2, 160);
	frc->mn.hd.s = point2(MENU_WIDTH / 2, 40);
	frc->mn.hd.t = "Hide";
	frc->mn.hd.tp = point2(5, 0);
	frc->mn.hd.tc = 0xffffff;
	frc->mn.hd.h = 0;
	frc->mn.hd.a = 0;
	frc->mn.hd.d = 1;
	frc->mn.hd.color = 0xa2b3e5;
	frc->mn.hd.h_color = 0x7e93d4;
	frc->mn.hd.a_color = 0x7e93d4;
	frc->mn.hd.d_color = 0xaaaaaa;
	return (1);
}

int		action_menu_init(t_frc *frc)
{
	action_menu_quit(frc);
	action_menu_hide(frc);
	return (1);
}
