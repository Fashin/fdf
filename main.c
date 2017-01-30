/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:58:42 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/01/30 12:21:52 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		bind_key(int keycode, void *params)
{
	(void)params;
	if (keycode == 53)
		exit(0);
	return (0);
}

void	print_row(int xi, int yi, int xf, int yf, void *mlx, void *win)
{
	int		dx;
	int		dy;
	int		cumul;
	int		x;
	int		y;

	x = xi;
	y = yi;
	dx = xf - xi;
	dy = yf - yi;
	mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
	cumul = dx / 2;
	while (++x < xf)
	{
		cumul +=dy;
		if (cumul >= dx)
		{
			cumul -= dx;
			y++;
		}
		mlx_pixel_put(mlx, win, x, y, 0x00FFFFFF);
	}
}

int		main(void)
{
	void	*mlx;
	void	*win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "My First Windows");
	print_row(0, 0, 100, 100, mlx, win);
	mlx_key_hook(win, bind_key, mlx);
	mlx_loop(mlx);
	return (0);
}
