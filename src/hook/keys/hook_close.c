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

int			close_hook(t_frc *frc)
{
  if (frc->mb.cvs.img)
    mlx_destroy_image(frc->mlx, frc->mb.cvs.img);
	free(frc->mlx);
	free(frc->win);
	free(frc);
	exit(0);
	return (0);
}
