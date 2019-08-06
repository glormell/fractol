#include "hook/keys/hook_keys.h"

int				is_shift_release(int key)
{
	return (key == 1L << 30);
}

int				is_shift(int key)
{
	return (key == K_LSHFT || key == K_RSHFT);
}

int				key_press(int key, t_frc *frc)
{
	static int	shift = 0;
	
  (void)shift;
	if (is_keys_close(key))
		close_keys_hook(frc);
  if (is_keys_move(key))
    move_keys_hook(key, frc);
	return (0);
}

int				key_release(int key, t_frc *frc)
{
	if (key == K_LSHFT || key == K_RSHFT)
		key_press(1L << 30, frc);
	return (0);
}
