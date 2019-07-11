//
//  core.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 10/07/2019.
//

#include "core/core.h"

t_frc		*p_frc()
{
	
	t_frc	*frc;
	
	if (!(frc = (t_frc *)ft_memalloc(sizeof(t_frc))))
		return (0);
	
	if ((!(frc->mlx = mlx_init())) ||
		(!(win_init(frc, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE))))
		exit(0);
	
	return (frc);
	
}
