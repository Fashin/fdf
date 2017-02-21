/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_map_resolve.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 13:18:49 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/21 15:13:25 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		put_pixel(t_info *info, int x, int y, int color)
{
	int		i;

	printf("x = %d ; y = %d\n", x, y);
	i = info->sl * y + x * 4;
	info->data[i] = color & 0xff;
	info->data[++i] = color >> 8 & 0xff;
	info->data[++i] = color >> 16;
}

void		rotate_point(t_info *info, char c, t_point *point)
{
	if (c == '\n')
	{
		point->y1 += 50;
		point->x1 = 50;
	}
	else
		point->x1 += 50;
	draw_line(info, point)
}

t_point		*set_point(t_point *point)
{
	point->x1 = 50;
	point->y1 = 50;
	point->x2 = 0;
	point->y2 = 0;
	point->dx = 0;
	point->dy = 0;
	return (point);
}

int			ft_launch_map_resolve(t_info *info, char *points)
{
	int			i;
	t_point		*point;

	info->img = mlx_new_image(info->mlx, 600, 600);
	info->data = mlx_get_data_addr(info->img, &(info->bpp), &(info->sl), &(info->endian));
	if (!(point = (t_point *)malloc(sizeof(t_point))))
		return (0);
	point = set_point(point);
	i = -1;
	while (points[++i])                                                
		rotate_point(info, points[i], point);	
	mlx_put_image_to_window(info->mlx, info->win, info->img, 0, 0);
	return (0);	
}
