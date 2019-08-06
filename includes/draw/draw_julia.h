#ifndef DRAW_JULIA_H
# define DRAW_JULIA_H
# include <pthread.h>
# include "mlx.h"
# include "constants.h"
# include "core/t_frc.h"
# include "core/core_point.h"
# include "core/core_complex.h"
# include "draw/draw_helpers.h"

typedef struct	s_jl_worker
{
	t_frc		*frc;
	t_point2d	from;
	t_point2d	to;
}				t_jl_worker;

int		draw_julia(t_frc *frc);

#endif
