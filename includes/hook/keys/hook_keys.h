//
//  hook_keys.h
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#ifndef HOOK_KEYS_H
# define HOOK_KEYS_H
# include "hook/codes/hook_codes.h"
# include "hook/keys/hook_close.h"

int				key_press(int key, void *param);
int				key_release(int key, void *param);

#endif
