#ifndef HOOK_MOVE_H
# define HOOK_MOVE_H
# include "mlx.h"
# include <math.h>
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"

int    is_move(int key);
int    move_hook(int key, t_frc *frc);

#endif
