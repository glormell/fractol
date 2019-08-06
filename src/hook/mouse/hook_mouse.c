//
//  hook_mouse.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#include "hook/mouse/hook_mouse.h"

//t_point2		canvas_mouse(t_frc *frc)
//{
//	t_point2	c;
//
////	c.x = frc->mouse.x - frc->cvs.t.x;
////	if (frc->mouse.x < frc->cvs.t.x)
////		c.x = 0;
////	if (frc->mouse.x > frc->cvs.t.x + frc->cvs.w)
////		c.x = frc->cvs.t.x + frc->cvs.w;
////	c.y = frc->mouse.y - frc->cvs.t.y;
////	if (frc->mouse.y < frc->cvs.t.y)
////		c.y = 0;
////	if (frc->mouse.y > frc->cvs.t.y + frc->cvs.h)
////		c.y = frc->cvs.t.y + frc->cvs.h;
//	return (c);
//}

int				mouse_press(int button, int x, int y, t_frc *frc)
{
  (void)frc;
	if (is_zoom(button))
		hook_zoom(button, point2d(x, y), frc);
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
	/*if (left)
		translate_hook(point3((x - prev.x), (y - prev.y), 0), frc);
	else if (right)
		rotate_hook(point3(-(y - prev.y) * 0.001, (x - prev.x) * 0.001, 0),
					frc);*/
	prev = (t_point2){ x, y };
	frc->mouse = prev;
	return (0);
}
