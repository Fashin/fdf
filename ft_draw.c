/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 14:42:50 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/21 15:22:41 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		draw_line(t_info *info, t_point *point)
{
	int		sx;
	int		sy;
	int		err;
	int		e2;

	point->dx = fabs(point->x2 - point->x1);
	point->dy = fabs(point->y2 - point->y1);
	sx = (point->x1 < point->x2) ? 1 : -1;
	sy = (point->y1 < point->y2) ? 1 : -1;
	err = (point->dx > point->dy) ? dx : -dy / 2;
	while (point->x2 != point->x1 && point->y2 != point->y1)
	{
		put_pixel(point->x1, point->y1);
		e2 = err;
		if (e1 > -(dx))
		{
			err -= dy
			point->x1 += sx;
		}
		if (e2 < dy)
		{
			err += dx;
			point->y1 += sy;
		}
	}
}
