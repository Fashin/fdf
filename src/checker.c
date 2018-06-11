/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:57:38 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 19:41:47 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		assign_value(t_map *map, char **values, int num_row)
{
	int length = ft_tablen(values);

	if (map->map == NULL)
		if (!(map->map = (int **)malloc(sizeof(int *) * 10)))
			return (0);
	if (!(map->map[num_row] = (int *)malloc(sizeof(int) * length)))
		return (0);
	int i = -1;
	while (++i)
		map->map[num_row][i] = rand() % 20;
	i = -1;
	return (num_row + 1);
}

int		check_value(char **values, t_map *map, int num_row)
{
	int			i;
	int			j;

	i = -1;
	while (values[++i])
	{
		j = -1;
		while (values[i][++j])
		{
			if (!ft_isdigit(values[i][j]) && !(values[i][j] == '-' && ft_isdigit(values[i][++j])))
				return (0);
		}
	}
	assign_value(map, values, num_row);
	return (assign_value(map, values, num_row));
}

int		check_rows(int fd, t_map *map)
{
	char		*rows;
	int			ret;
	int			num_row;

	num_row = 0;
	while ((ret = get_next_line(fd, &rows)) > 0)
		if (!(num_row = check_value(ft_strsplit(rows, ' '), map, num_row)))
			return (0);
	int i = -1;
	while (++i < num_row)
	{
		int j = -1;
		while (++j < 11)
			printf("%d | ", map->map[i][j]);
		printf("\n");
	}
	return (1);
}

int		checker(char *map_name, t_map *map)
{
	int		fd;

	if (!(fd = open(map_name, O_RDONLY)))
		return (0);
	if (!(check_rows(fd, map)))
		return (0);
	return (1);
}
