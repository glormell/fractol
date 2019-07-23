//
//  draw_mandelbrot.c
//  Fractol
//
//  Created by Garth tyrell Lormelle on 23/07/2019.
//

#include "draw/draw_mandelbrot.h"

int			raw_color(unsigned char r, unsigned char g,
					  unsigned char b, unsigned char a)
{
	(void)a;
	return ((r << 16) + (g << 8) + b);
}

int HSVToRGB(double h, double s, double v) {
	unsigned char r = 0, g = 0, b = 0;
	
	if (s == 0)
	{
		r = v;
		g = v;
		b = v;
	}
	else
	{
		int i;
		double f, p, q, t;
		
		if (h == 360)
			h = 0;
		else
			h = h / 60;
		
		i = (int)trunc(h);
		f = h - i;
		
		p = v * (1.0 - s);
		q = v * (1.0 - (s * f));
		t = v * (1.0 - (s * (1.0 - f)));
		
		switch (i)
		{
			case 0:
				r = v;
				g = t;
				b = p;
				break;
				
			case 1:
				r = q;
				g = v;
				b = p;
				break;
				
			case 2:
				r = p;
				g = v;
				b = t;
				break;
				
			case 3:
				r = p;
				g = q;
				b = v;
				break;
				
			case 4:
				r = t;
				g = p;
				b = v;
				break;
				
			default:
				r = v;
				g = p;
				b = q;
				break;
		}
		
	}
	
	return raw_color(r, g, b, 1);
}

void				put_pixel(t_frc *frc, int x, int y, int c)
{
	char			*canvas_data;
	int				bits;
	int				pos;
	unsigned int	color;
	
	if (!(frc->cvs.img))
		frc->cvs.img = mlx_new_image(frc->mlx, WIN_WIDTH, WIN_HEIGHT);
	canvas_data = mlx_get_data_addr(frc->cvs.img, &bits, &pos, &pos);
	color = mlx_get_color_value(frc->mlx, c);
	pos = WIN_WIDTH * (bits / 8) * y + x * (bits / 8);
	*((unsigned int *)(canvas_data + pos)) = color;
}

int		draw_mandelbrot(t_frc *frc)
{
	//each iteration, it calculates: newz = oldz*oldz + p, where p is the current pixel, and oldz stars at the origin
	double pr, pi;           //real and imaginary part of the pixel p
	double newRe, newIm, oldRe, oldIm;   //real and imaginary parts of new and old z
	double zoom = 1, moveX = -0.5, moveY = 0; //you can change these to zoom and change position
	int color; //the RGB color value for the pixel
	int maxIterations = 300;//after how much iterations the function should stop
	
	//loop through every pixel
	for(int y = 0; y < WIN_HEIGHT; y++)
		for(int x = 0; x < WIN_WIDTH; x++)
		{
			//calculate the initial real and imaginary part of z, based on the pixel location and zoom and position values
			pr = 1.5 * (x - WIN_WIDTH / 2) / (0.5 * zoom * WIN_WIDTH) + moveX;
			pi = (y - WIN_HEIGHT / 2) / (0.5 * zoom * WIN_HEIGHT) + moveY;
			newRe = newIm = oldRe = oldIm = 0; //these should start at 0,0
			//"i" will represent the number of iterations
			int i;
			//start the iteration process
			for(i = 0; i < maxIterations; i++)
			{
				//remember value of previous iteration
				oldRe = newRe;
				oldIm = newIm;
				//the actual iteration, the real and imaginary part are calculated
				newRe = oldRe * oldRe - oldIm * oldIm + pr;
				newIm = 2 * oldRe * oldIm + pi;
				//if the point is outside the circle with radius 2: stop
				if((newRe * newRe + newIm * newIm) > 4) break;
			}
			//use color model conversion to get rainbow palette, make brightness black if maxIterations reached
			color = HSVToRGB(i % 256, 255, 255 * (i < maxIterations));
			//draw the pixel
			//pset(x, y, color);
			put_pixel(frc, x, y, color);
			
		}
	return (0);
}
