#include "hook/mouse/hook_zoom.h"

int				is_zoom(int button)
{
	return (button == M_SCR_UP || button == M_SCR_DOWN);
}

int				hook_zoom(int button, t_point2d p, t_frc *frc)
{
	t_complex	c;
	
	c = complex(p.x / (WIN_WIDTH / (frc->cvs->max.r - frc->cvs->min.r)) +
				frc->cvs->min.r,
				p.y / (WIN_HEIGHT / (frc->cvs->max.i - frc->cvs->min.i)) +
				frc->cvs->min.i);
	if (button == M_SCR_UP)
		apply_zoom(frc, c, 1.2);
	else if (button == M_SCR_DOWN)
		apply_zoom(frc, c, 1 / 1.2);
	frc->cvs->draw(frc);
	return (1);
}
