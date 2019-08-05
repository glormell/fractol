#ifndef T_MANDELBROT_H
# define T_MANDELBROT_H
# include "core/core_point.h"
# include "core/core_complex.h"

typedef struct  s_mandelbrot
{
  void    *img;
  int       c;
  int       i;
  t_complex min;
  t_complex max;
  t_point3  t;
}        t_mandelbrot;

#endif
