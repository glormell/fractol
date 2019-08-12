#ifndef HOOK_MENU_H
# define HOOK_MENU_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "hook/codes/hook_codes.h"
# include "hook/codes/mouse_codes.h"
# include "hook/keys/hook_keys_quit.h"
# include "hook/keys/hook_keys_menu.h"
# include "hook/keys/hook_keys_select.h"

int				is_menu_hook(t_point2 p, t_frc *frc);
int				clear_menu(t_frc *frc);
int				menu_hook(t_point2 p, t_frc *frc);
int				menu_click_hook(t_point2 p, int button, t_frc *frc);

#endif
