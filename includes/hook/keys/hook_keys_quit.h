#ifndef HOOK_KEYS_QUIT_H
# define HOOK_KEYS_QUIT_H
# include <stdlib.h>
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"

int		is_quit_keys(int key);
int		quit_keys_hook(t_frc *frc);

#endif

