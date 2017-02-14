/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:28:31 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/14 19:02:47 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		init(t_info *info, t_list *list)
{
	int		x = 0;
	int		y = 0;

	(void)list;
	info->win = mlx_new_window(info->mlx, info->height * 70, info->width * 70, "My First Windows");
	mlx_pixel_put(info->mlx, info->win, x, y, 0x00FFFFFF);
}
