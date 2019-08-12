#include "hook/hook_julia.h"

int		is_toggle_julia_hook(int key)
{
	return (key == K_SPACE);
}

int		toggle_julia_hook(t_frc *frc)
{
	frc->jl.unlocked = !frc->jl.unlocked;
	return (0);
}

int		julia_hook(t_point2 p, t_frc *frc)
{
	frc->jl.p.x += (double)p.x;
	frc->jl.p.y += (double)p.y;
	frc->jl.c = complex(frc->jl.p.x / (WIN_WIDTH / (frc->jl.max.r -
						frc->jl.min.r)) + frc->jl.min.r, frc->jl.p.y /
						(WIN_HEIGHT / (frc->jl.max.i - frc->jl.min.i)) +
						frc->jl.min.i);
	frc->cvs->draw(frc);
	return (1);
}
