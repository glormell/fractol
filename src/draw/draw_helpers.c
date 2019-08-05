#include "draw/draw_helpers.h"

void				put_pixel(void *mlx, void *img, t_point2 p, int c)
{
	char			*canvas_data;
	int				bits;
	int				pos;
	unsigned int	color;
	
	if (!(img))
		img = mlx_new_image(mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = mlx_get_data_addr(img, &bits, &pos, &pos);
	color = mlx_get_color_value(mlx, c);
	pos = WIN_WIDTH * (bits / 8) * p.y + p.x * (bits / 8);
	*((unsigned int *)(canvas_data + pos)) = color;
}

static double		inter(double from, double to, double inter)
{
	return (from + ((to - from) * inter));
}

void				apply_zoom(t_frc *frc, t_complex m, double zoom)
{
	zoom = 1.0 / zoom;
	frc->mb.min = complex(inter(m.r, frc->mb.min.r, zoom),
					   inter(m.i, frc->mb.min.i, zoom));
	frc->mb.max = complex(inter(m.r, frc->mb.max.r, zoom),
					   inter(m.i, frc->mb.max.i, zoom));
}
