#include "hook/mouse/hook_mouse.h"

int				mouse_press(int button, int x, int y, t_frc *frc)
{
  (void)frc;
	if (is_mouse_zoom(button))
		zoom_mouse_hook(button, point2d(x, y), frc);
	else if (button == M_LEFT)
		mouse_move(x, y, (void *)0);
	else if (button == M_MIDDLE)
		mouse_move(x, y, (void *)1);
	else if (button == M_RIGHT)
		mouse_move(x, y, (void *)2);
	return (0);
}

int				mouse_release(int button, int x, int y, void *param)
{
	(void)param;
	if (button == M_LEFT)
		mouse_move(x, y, (void *)0);
	else if (button == M_MIDDLE)
		mouse_move(x, y, (void *)1);
	else if (button == M_RIGHT)
		mouse_move(x, y, (void *)2);
	return (0);
}

int				mouse_move(int x, int y, t_frc *frc)
{
	static t_point2	prev = (t_point2){ 0, 0 };
	static int		left = 0;
	static int		middle = 0;
	static int		right = 0;
	
	if ((void *)frc == (void *)0)
		return ((y > 0) || left ? left = !left : 0);
	else if ((void *)frc == (void *)1)
		return ((y > 0) || middle ? middle = !middle : 0);
	else if ((void *)frc == (void *)2)
		return ((y > 0) || right ? right = !right : 0);
	if (left)
		translate_hook(point2((prev.x - x), (prev.y - y)), frc);
	else if (frc->cvs == &frc->jl.cvs && (frc->jl.unlocked || right))
		julia_hook(point2((prev.x - x), (prev.y - y)), frc);
	prev = point2(x, y);
	frc->mouse = prev;
	return (0);
}
