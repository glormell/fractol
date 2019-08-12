#ifndef CORE_H
# define CORE_H
# include "mlx.h"
# include "libft.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_window.h"
# include "core/core_canvas.h"
# include "hook/hook.h"
# include "draw/draw.h"

t_frc	*p_frc(void *mlx, int *win_count, char *type);

#endif
