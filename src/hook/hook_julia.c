#include "hook/hook_julia.h"

int		julia_hook(t_point2 p, t_frc *frc)
{
	frc->jl.p.x += (double)p.x;
	frc->jl.p.y += (double)p.y;
	frc->jl.c = complex(frc->jl.p.x / (WIN_WIDTH / (frc->cvs->max.r -
													frc->cvs->min.r)) +
						frc->cvs->min.r,
						frc->jl.p.y / (WIN_HEIGHT / (frc->cvs->max.i -
													 frc->cvs->min.i)) +
						frc->cvs->min.i);
	frc->cvs->draw(frc);
	return (1);
}
