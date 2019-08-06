#ifndef HOOK_KEYS_MOVE_H
# define HOOK_KEYS_MOVE_H
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"
# include "hook/hook_translate.h"

int    is_keys_move(int key);
int    move_keys_hook(int key, t_frc *frc);

#endif