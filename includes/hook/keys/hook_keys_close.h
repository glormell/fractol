#ifndef HOOK_KEYS_CLOSE_H
# define HOOK_KEYS_CLOSE_H
# include <stdlib.h>
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"

int		is_keys_close(int key);
int		close_keys_hook(t_frc *frc);

#endif
