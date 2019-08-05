//
//  draw.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 23/07/2019.
//

#include "draw/draw.h"

int		draw_init(t_frc *frc)
{
  if (!(mandelbrot_init(frc)) ||
      !(draw_mandelbrot(frc)))
    return (0);
  return (1);
}

int   mandelbrot_init(t_frc *frc)
{
  frc->mb.c = 0x030306;
  frc->mb.i = 300;
  frc->mb.min = complex(-4, -2);
  frc->mb.max = complex(4, 2);
  frc->mb.t = point3(-0.5, 0, 1);
  return (1);
}
