#ifndef DRAW_HELPERS_H
# define DRAW_HELPERS_H
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"

int					clear(t_frc *frc);
void				put_pixel(t_frc *frc, t_point2 p, int c);
void				apply_zoom(t_frc *frc, t_complex m, double zoom);

#endif
