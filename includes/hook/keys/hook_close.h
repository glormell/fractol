//
//  hook_close.h
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#ifndef HOOK_CLOSE_H
# define HOOK_CLOSE_H
# include <stdlib.h>
# include "mlx.h"
# include "core/t_frc.h"
# include "hook/codes/hook_codes.h"

int		is_close(int key);
int		close_hook(void *param);

#endif
