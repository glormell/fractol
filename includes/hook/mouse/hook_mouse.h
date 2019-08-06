//
//  hook_mouse.h
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#ifndef HOOK_MOUSE_H
# define HOOK_MOUSE_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/codes/mouse_codes.h"

t_point2	canvas_mouse(t_frc *frc);
int			mouse_press(int button, int x, int y, t_frc *frc);
int			mouse_release(int button, int x, int y, void *param);
int			mouse_move(int x, int y, t_frc *frc);

#endif
