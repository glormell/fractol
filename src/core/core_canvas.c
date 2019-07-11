//
//  core_canvas.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 11/07/2019.
//

#include "core/core_canvas.h"

int					clear_canvas(t_frc *frc)
{
	int				*canvas_data;
	int				bits;
	int				len;
	
	if (!(frc->cvs.img))
		frc->cvs.img = mlx_new_image(frc->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = (int *)mlx_get_data_addr(frc->cvs.img, &bits,
										   &len, &len);
	len = WIN_WIDTH * WIN_HEIGHT * (bits / 32);
	while (--len)
	{
		canvas_data[len] = frc->appearance.bg.raw;
	}
	return (1);
}

int					canvas_init(t_frc *frc)
{
	t_point3		t;
	t_point2		s;
	
	s = point2(WIN_WIDTH, WIN_HEIGHT);
	t = point3((s.x - (frc->map->width - 1) * (s.x * CANVAS_WF) /
				(((frc->map->width > frc->map->height) ? frc->map->width :
				  frc->map->height) - 1)) / 2, (s.y - (frc->map->height - 1) *
												(s.y * CANVAS_HF) / (((frc->map->width > frc->map->height) ?
																	  frc->map->width : frc->map->height) - 1)) / 2, (s.y * CANVAS_WF) /
			   (((frc->map->width > frc->map->height) ? frc->map->width :
				 frc->map->height) - 1));
	frc->cvs.t = t;
	frc->cvs.r = point3(0, 0, 0);
	frc->cvs.zscale = 1;
	frc->cvs.w = WIN_WIDTH * CANVAS_WF;
	frc->cvs.h = WIN_HEIGHT * CANVAS_HF;
	frc->cvs.w = (frc->map->width >= frc->map->height) ? frc->cvs.w
	: ((float)frc->map->width / frc->map->height) * frc->cvs.h;
	frc->cvs.h = (frc->map->width <= frc->map->height) ? frc->cvs.h
	: ((float)frc->map->height / frc->map->width) * frc->cvs.w;
	frc->cvs.zscale = 1;
	frc->cvs.changed = 1;
	clear_canvas(frc);
	return (1);
}
