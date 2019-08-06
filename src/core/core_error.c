#include "core/core_error.h"

void	xerror(int code, char *str)
{
	errno = code;
	perror(str);
	exit(code);
}
