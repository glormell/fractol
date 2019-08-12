#include "hook/keys/hook_keys_close.h"

int			is_close_keys(int key)
{
	return (key == E_CLOSE || key == XM_CLOSE);
}

int			close_keys_hook(t_frc *frc)
{
	void	*mlx;
	int		*win_count;

	mlx = frc->mlx;
	win_count = frc->win_count;
	if (frc->mb.cvs.img)
		mlx_destroy_image(frc->mlx, frc->mb.cvs.img);
	if (frc->jl.cvs.img)
		mlx_destroy_image(frc->mlx, frc->jl.cvs.img);
	if (frc->bs.cvs.img)
		mlx_destroy_image(frc->mlx, frc->bs.cvs.img);
	free(frc);
	if (*win_count == 1)
	{
		free(mlx);
		exit(0);
	}
	--*win_count;
	return (0);
}
