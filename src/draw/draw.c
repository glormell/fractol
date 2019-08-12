#include "draw/draw.h"

int			draw_init(t_frc *frc)
{
	if (!(mandelbrot_init(frc)) ||
		!(julia_init(frc)) ||
		!(burningship_init(frc)) ||
		!(frc->cvs->draw(frc)))
		return (0);
	return (1);
}
