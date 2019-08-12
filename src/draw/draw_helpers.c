#include "draw/draw_helpers.h"

int	clear(void *mlx, t_canvas *cvs)
{
	int		*canvas_data;
	int		bits;
	int		len;
	
	if (!(cvs->img))
		cvs->img = mlx_new_image(mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = (int *)mlx_get_data_addr(cvs->img, &bits, &len, &len);
	len = WIN_WIDTH * WIN_HEIGHT * (bits / 32);
	while (--len)
		canvas_data[len] = 0;
	return (1);
}

void				put_pixel(t_frc *frc, t_point2 p, int c)
{
	char			*canvas_data;
	int				bits;
	int				pos;
	unsigned int	color;
	
	if (!(frc->cvs->img))
		frc->cvs->img = mlx_new_image(frc->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = mlx_get_data_addr(frc->cvs->img, &bits, &pos, &pos);
	color = mlx_get_color_value(frc->mlx, c);
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
	frc->cvs->min = complex(inter(m.r, frc->cvs->min.r, zoom),
							inter(m.i, frc->cvs->min.i, zoom));
	frc->cvs->max = complex(inter(m.r, frc->cvs->max.r, zoom),
							inter(m.i, frc->cvs->max.i, zoom));
}

void				random_color(t_frc *frc)
{
	int				color;
	int				i;

	color = 0;
	i = 24;
	srand(time(0));
	while (i != 0)
	{
		i -= 8;
		color += color % 2 ? 0 : ((unsigned char)(rand() % 30) << i);
	}
	frc->cvs->c = color;
	frc->cvs->draw(frc);
}
