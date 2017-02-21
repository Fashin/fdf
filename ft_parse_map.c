/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:49:35 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/17 15:45:56 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		set_info(t_info *info)
{
	info->height = 0;
	info->width = 0;
	info->bpp = 0;
	info->sl = 0;
	info->endian = 0;
}

char	*switch_memory(char *str, int size)
{
	char	*ptr;
	int		i;
	int		length;

	length = ft_strlen(str) + size + 1;
	if (!(ptr = (char *)malloc(length * sizeof(char))))
		return (0);
	i = -1;
	while (str[++i])
		ptr[i] = str[i];
	ptr[i + 1] = '\0';
	free(str);
	return (ptr);
}

int		count_char(char *str)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (str[++i])
		if (ft_isalpha(str[i]) || ft_isdigit(str[i]) || str[i] == '\n')
			count++;
	return (count);
}

char	*ft_parse_map(char *filename, t_info *info)
{
	int			fd;
	int			i;
	int			j;
	char		*line;
	char		*points;

	set_info(info);
	if (!(fd = open(filename, O_RDONLY)))
		return (0);
	if (!(points = (char *)malloc(sizeof(char))))
		return (0);
	j = -1;
	while (get_next_line(fd, &line))
	{
		i = -1;
		points = switch_memory(points, count_char(line) + 1);
		while (line[++i])
		{
			if (ft_isdigit(line[i]) || line[i] == '\n')
				points[++j] = line[i];
			(info->height == 0) ? info->width++ : 0;
		}
		points[++j] = '\n';
		info->height++;
	}
	points[j + 1] = '\0';
	return (points);
}
