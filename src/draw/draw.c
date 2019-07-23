//
//  draw.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 23/07/2019.
//

#include "draw/draw.h"

int		draw_init(t_frc *frc)
{
	frc->mandelbrot = &draw_mandelbrot;
}
