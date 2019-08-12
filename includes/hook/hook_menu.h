#ifndef HOOK_MENU_H
# define HOOK_MENU_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/codes/hook_codes.h"

int				is_menu_hook(t_point2 p, t_frc *frc);
int				menu_hook(t_point2 p, t_frc *frc);
int				clear_menu(t_frc *frc);

#endif
