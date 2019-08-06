#ifndef HOOK_KEYS_H
# define HOOK_KEYS_H
# include "hook/codes/hook_codes.h"
# include "hook/keys/hook_keys_close.h"
# include "hook/keys/hook_keys_move.h"

int				key_press(int key, t_frc *frc);
int				key_release(int key, t_frc *frc);

#endif
