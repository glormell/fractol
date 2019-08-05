#ifndef T_MANDELBROT_H
# define T_MANDELBROT_H
# include "core/core_point.h"

typedef struct  s_mandelbrot
{
  void    *img;
  int       color;
  
  t_point3  transform;
  t_point2  size;
}        t_mandelbrot;

#endif
