#include "hook/keys/hook_keys_repair.h"

int    is_keys_repair(int key)
{
	return (key == K_R);
}

int    repair_keys_hook(t_frc *frc)
{
	if (frc->cvs == &frc->mb.cvs)
		mandelbrot_init(frc);
	if (frc->cvs == &frc->jl.cvs)
		julia_init(frc);
	if (frc->cvs == &frc->bs.cvs)
		burningship_init(frc);
	frc->cvs->draw(frc);
	return (0);
}
