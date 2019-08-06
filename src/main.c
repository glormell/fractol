//
//  main.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 10/07/2019.
//

#include "main.h"

int 		main(int argc, char **argv)
{
	
	t_frc	*frc;
	
  (void)argc;
  (void)argv;
	if (!(frc = p_frc()))
		exit(0);
	
	mlx_loop(frc->mlx);
	
	return (0);
}
