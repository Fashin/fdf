/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:58:42 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/01/30 12:03:58 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

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
	mlx_loop(mlx);
	return (0);
}
