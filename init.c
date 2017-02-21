/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 16:28:31 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/17 15:48:03 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_info	*set_size_window(t_info *info)
{
	int		height;
	int		width;

	height = info->height * 70;
	width = info->width * 70;
	info->height = height;
	info->width = width;
	return (info);
}

int		bind_key(int keycode, void *param)
{
	(void)param;
	if (keycode == 53)
		exit(1);
	return (0);
}

int		init(char *file, t_info *info)
{
	char	*points;

	if (!(points = ft_parse_map(file, info)))
		ft_puterror("Error when opening your file");
	info->mlx = mlx_init();
	info = set_size_window(info);
	printf("windows size : width : %d ; height : %d\n", info->width, info->height);
	info->win = mlx_new_window(info->mlx, 600, 600, "my obviously nice windows");
	ft_launch_map_resolve(info, points);
	mlx_key_hook(info->win, bind_key, 0);
	mlx_loop(info->mlx);
	return (1);
}
