#ifndef HOOK_MOUSE_H
# define HOOK_MOUSE_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/codes/mouse_codes.h"
# include "hook/hook_translate.h"
# include "hook/hook_julia.h"
# include "hook/hook_menu.h"
# include "hook/mouse/hook_mouse_zoom.h"

t_point2	canvas_mouse(t_frc *frc);
int			mouse_press(int button, int x, int y, t_frc *frc);
int			mouse_release(int button, int x, int y, void *param);
int			mouse_move(int x, int y, t_frc *frc);

#endif
