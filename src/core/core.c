#include "core/core.h"

t_frc		*p_frc()
{
	
	t_frc	*frc;
	
	if (!(frc = (t_frc *)ft_memalloc(sizeof(t_frc))))
		return (0);
	
	if ((!(frc->mlx = mlx_init())) ||
		(!(win_init(frc, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE))) ||
		(!(hook_init(frc))) ||
		(!(draw_init(frc))))
		exit(0);
	
	return (frc);
	
}
