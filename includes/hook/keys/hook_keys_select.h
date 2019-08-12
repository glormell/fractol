#ifndef HOOK_KEYS_SELECT_H
# define HOOK_KEYS_SELECT_H
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"
# include "draw/draw_helpers.h"

int    is_select_keys(int key);
int    select_keys_hook(int key, t_frc *frc);

#endif
