#ifndef HOOK_KEYS_REPAIR_H
# define HOOK_KEYS_REPAIR_H
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"
# include "draw/draw_mandelbrot.h"
# include "draw/draw_julia.h"
# include "draw/draw_burningship.h"

int    is_repair_keys(int key);
int    repair_keys_hook(t_frc *frc);

#endif
