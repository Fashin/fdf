/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:49:35 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/09 16:53:56 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		init_struct(t_point **point)
{
	if (!(*point = malloc(sizeof(t_point))))
		return (0);
	point->x = 0;
	point->y = 0;
	point->z = 0;
	return (1);
}

int		init_map(t_map **map)
{
	if (!(*map = malloc(sizeof(t_map))))
		return (0);
	map->point = NULL;
	map->next = NULL;
	return (1);
}

void	ft_add_maillon()
{
}

int		ft_parse_map(char *filename)
{
	int			fd;
	int			length;
	int			i;
	int			j;
	char		*line;
	t_point		*point;
	t_map		*map;

	point = NULL;
	map = NULL;
	if (!init_struct(&point))
		return (0);
	if (!(init_map(&map)))
		return (0);
	if (!(fd = open(filename, O_RDONLY)))
		return (0);
	while (get_next_line(fd, &line))
	{
		length = ft_strlen(line);
		i = 0;
		while (i < length)
		{
			point->x = i / 2;
			point->y = j;
			point->z = line[i];
			map->point = point;
			
			i += 2;
		}
		j++;
	}
	return (0);
}
