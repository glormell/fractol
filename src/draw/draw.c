#include "draw/draw.h"

int			draw_init(t_frc *frc)
{
	if (!(mandelbrot_init(frc)) ||
		!(julia_init(frc)) ||
		!(frc->cvs->draw(frc)))
		return (0);
	return (1);
}

int			mandelbrot_init(t_frc *frc)
{
	frc->cvs = &frc->jl.cvs;
	clear(frc);
	frc->mb.cvs.c = 0x030306;
	frc->mb.cvs.i = 300;
	frc->mb.cvs.min = complex(-4, -2);
	frc->mb.cvs.max = complex(4, 2);
	frc->mb.cvs.t = point3(-0.5, 0, 1);
	frc->mb.cvs.draw = (int (*)(void *))draw_mandelbrot;
	return (1);
}

int			julia_init(t_frc *frc)
{
	frc->cvs = &frc->jl.cvs;
	clear(frc);
	frc->jl.cvs.c = 0x010505;
	frc->jl.cvs.i = 300;
	frc->jl.cvs.min = complex(-4, -2);
	frc->jl.cvs.max = complex(4, 2);
	frc->jl.cvs.t = point3(-0.5, 0, 1);
	frc->jl.p = point2d(528, 408.627);
	frc->jl.c = complex(-0.7, 0.27015);
	frc->jl.cvs.draw = (int (*)(void *))draw_julia;
	return (1);
}
