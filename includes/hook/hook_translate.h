#ifndef HOOK_TRANSLATE_H
# define HOOK_TRANSLATE_H
# include <math.h>
# include "mlx.h"
# include "core/t_frc.h"

int		left_hook(t_frc *frc);
int		right_hook(t_frc *frc);
int		top_hook(t_frc *frc);
int		bottom_hook(t_frc *frc);
int		translate_hook(t_point2 p, t_frc *frc);

#endif
