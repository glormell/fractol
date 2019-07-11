//
//  hook.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#include "hook/hook.h"

int	hook_init(t_frc *frc)
{
	mlx_hook(frc->win, E_CLOSE, XM_CLOSE, close_hook, frc);
	mlx_hook(frc->win, E_KPRESS, XM_KPRESS, key_press, frc);
	mlx_hook(frc->win, E_KRELEASE, XM_KRELEASE, key_release, frc);
	mlx_hook(frc->win, E_MPRESS, XM_MPRESS, mouse_press, frc);
	mlx_hook(frc->win, E_MRELEASE, XM_MRELEASE, mouse_release, frc);
	mlx_hook(frc->win, E_MMOVE, XM_MMOVE, mouse_move, frc);
	return (1);
}
