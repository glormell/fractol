#include "hook/keys/hook_keys_select.h"

int    is_select_keys(int key)
{
	return (key == K_1 || key == K_2 || key == K_3 || key == K_4);
}

int    select_keys_hook(int key, t_frc *frc)
{
	if (key == K_1)
		select_canvas(frc, &frc->mb.cvs);
	else if (key == K_2)
		select_canvas(frc, &frc->jl.cvs);
	else if (key == K_3)
		select_canvas(frc, &frc->bs.cvs);
	else if (key == K_4)
		select_canvas(frc, &frc->tc.cvs);
	if (frc->cvs)
		frc->cvs->draw(frc);
	return (0);
}
