/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:57:38 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 15:39:39 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		assign_maillon(char **values, t_list *list)
{
	(void)list;
	while (*values)
	{
		while (**values)
		{
			printf("%c\n", **values);
			*values++;
		}
		values++;
	}
	return (1);
}

int		check_rows(int fd, t_list *list)
{
	char	*rows;
	int		ret;

	while ((ret = get_next_line(fd, &rows)) > 0)
		if (!(assign_maillon(ft_strsplit(rows, ' '), list)))
			return (0);
	return (1);
}

int		checker(char *map_name, t_list *list)
{
	int		fd;

	if (!(fd = open(map_name, O_RDONLY)))
		return (0);
	if (!(check_rows(fd, list)))
		return (0);
	printf("map is good\n");
	return (1);
}
