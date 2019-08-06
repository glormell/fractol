//
//  draw.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 23/07/2019.
//

#include "draw/draw.h"

static int          clear(t_frc *frc)
{
	int        *canvas_data;
	int        bits;
	int        len;
	
	if (!(frc->cvs->img))
		frc->cvs->img = mlx_new_image(frc->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = (int *)mlx_get_data_addr(frc->cvs->img, &bits,
										   &len, &len);
	len = WIN_WIDTH * WIN_HEIGHT * (bits / 32);
	while (--len)
		canvas_data[len] = 0;
	return (1);
}

int		draw_init(t_frc *frc)
{
  if (!(mandelbrot_init(frc)) ||
		!(frc->cvs->draw(frc)))
    return (0);
  return (1);
}

int   mandelbrot_init(t_frc *frc)
{
  frc->cvs = &frc->mb.cvs;
	clear(frc);
  frc->mb.cvs.c = 0x030306;
  frc->mb.cvs.i = 300;
  frc->mb.cvs.min = complex(-4, -2);
  frc->mb.cvs.max = complex(4, 2);
  frc->mb.cvs.t = point3(-0.5, 0, 1);
  frc->mb.cvs.draw = (int (*)(void *))draw_mandelbrot;
  return (1);
}
