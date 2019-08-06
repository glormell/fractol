#ifndef DRAW_H
# define DRAW_H
# include "core/t_frc.h"
# include "draw/draw_helpers.h"
# include "draw/draw_mandelbrot.h"
# include "draw/draw_julia.h"

int		draw_init(t_frc *frc);
int		mandelbrot_init(t_frc *frc);
int		julia_init(t_frc *frc);

#endif
