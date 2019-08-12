#include "hook/keys/hook_keys_quit.h"

int			is_keys_quit(int key)
{
	return (key == K_ESC || key == K_Q);
}

int			quit_keys_hook(t_frc *frc)
{
	if (frc->mb.cvs.img)
		mlx_destroy_image(frc->mlx, frc->mb.cvs.img);
	if (frc->jl.cvs.img)
		mlx_destroy_image(frc->mlx, frc->jl.cvs.img);
	if (frc->bs.cvs.img)
		mlx_destroy_image(frc->mlx, frc->bs.cvs.img);
	free(frc->win);
	free(frc->mlx);
	free(frc);
	exit(0);
	return (0);
}
