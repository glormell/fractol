#include "menu/menu.h"

int		menu_init(t_frc *frc)
{
	frc->mn.s = 1;
	frc->mn.p = point2(20, 20);
	frc->mn.draw = (int (*)(void *))draw_menu;
	main_menu_init(frc);
	mod_menu_init(frc);
	action_menu_init(frc);
	return (1);
}
