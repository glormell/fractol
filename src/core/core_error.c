//
//  core_error.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#include "core/core_error.h"

void	xerror(int code, char *str)
{
	errno = code;
	perror(str);
	exit(code);
}
