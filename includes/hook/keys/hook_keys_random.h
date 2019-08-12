#ifndef HOOK_KEYS_RANDOM_H
# define HOOK_KEYS_RANDOM_H
# include <stdlib.h>
# include <time.h>
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"

int    is_random_keys(int key);
int    random_keys_hook(t_frc *frc);

#endif
