//
//  hook_keys.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#include "hook/keys/hook_keys.h"

int				is_shift_release(int key)
{
	return (key == 1L << 30);
}

int				is_shift(int key)
{
	return (key == K_LSHFT || key == K_RSHFT);
}

int				key_press(int key, void *param)
{
	static int	shift = 0;
	
	if (is_close(key))
		close_hook(param);
	return (0);
}

int				key_release(int key, void *param)
{
	if (key == K_LSHFT || key == K_RSHFT)
		key_press(1L << 30, param);
	return (0);
}
