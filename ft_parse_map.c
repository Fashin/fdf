/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 15:49:35 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/14 19:01:07 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_point		*malloc_point(void)
{
	t_point		*point;

	if (!(point = (t_point *)malloc(sizeof(t_point))))
		return (0);
	return (point);
}

void		set_info(t_info *info)
{
	info->height = 0;
	info->width = 0;
}

t_list		*ft_parse_map(char *filename, t_info *info, t_list *list)
{
	int			fd;
	int			i;
	char		*line;
	t_point		*point;

	set_info(info);
	if (!(fd = open(filename, O_RDONLY)))
		return (0);
	while (get_next_line(fd, &line))
	{	
		i = 0;
		while (line[i])
		{
			point = malloc_point();
			point->z = line[i];
			ft_lstadd(&list, ft_lstnew(point, sizeof(t_point)));
			i += 2;
			(info->width == 0) ? info->height++ : 0;
		}
		point = malloc_point();
		info->width++;
		ft_lstadd(&list, ft_lstnew(point, sizeof(t_point)));
	}
	free(point);
	return (list);
}
