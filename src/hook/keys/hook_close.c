//
//  hook_close.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#include "hook/keys/hook_close.h"

int			is_close(int key)
{
	return (key == K_ESC || key == K_Q);
}

int			close_hook(void *param)
{
	t_frc	*frc;
	
	frc = (t_frc *)param;
	mlx_destroy_image(frc->mlx, frc->cvs.img);
	free(frc->mlx);
	free(frc->win);
	free(frc);
	exit(0);
	return (0);
}
