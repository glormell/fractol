#ifndef HOOK_ZOOM_H
# define HOOK_ZOOM_H
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"
# include "hook/codes/mouse_codes.h"
# include "draw/draw_helpers.h"

int				is_zoom(int button);
int				hook_zoom(int button, t_point2d p, t_frc *frc);

#endif
