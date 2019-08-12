#include "core/core.h"

t_frc		*p_frc(void *mlx, int *win_count, char *type)
{
	
	t_frc	*frc;
	
	if (!(frc = (t_frc *)ft_memalloc(sizeof(t_frc))))
		return (0);
	frc->mlx = mlx;
	frc->win_count = win_count;
	if ((!(win_init(frc, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE))) ||
		(!(hook_init(frc))) ||
		(!(draw_init(frc, type))))
		exit(0);
	return (frc);
	
}
