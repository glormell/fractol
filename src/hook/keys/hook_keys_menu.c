#include "hook/keys/hook_keys_menu.h"

int    is_menu_keys(int key)
{
	return (key == K_M);
}

int    menu_keys_hook(t_frc *frc)
{
	if (!(frc->cvs))
		return (0);
	frc->menu.s = !frc->menu.s;
	frc->cvs->draw(frc);
	return (0);
}
