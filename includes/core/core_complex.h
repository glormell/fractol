#ifndef CORE_COMPLEX_H
# define CORE_COMPLEX_H
# include "libft.h"

typedef struct  s_complex
{
  double      r;
  double      i;
}        t_complex;

t_complex     *p_complex(double r, double i);
t_complex     complex(double r, double i);

#endif
