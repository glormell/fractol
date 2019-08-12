#include "hook/hook_julia.h"

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
