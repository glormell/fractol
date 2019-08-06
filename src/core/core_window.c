#include "core/core_window.h"

int			win_init(t_frc *frc, int width, int height, char *title)
{
	if (!(frc->win = mlx_new_window(frc->mlx, width, height, title)))
		return (0);
	return (1);
}
