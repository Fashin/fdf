/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:57:38 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 16:45:21 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		check_size(char **values, size_t *size_x)
{	
	if (*size_x == 0)
		*size_x = ft_tablen(values);
	else if (*size_x != ft_tablen(values))
		return (0);
	return (1);
}

int		assign_maillon(char **values, t_list *list, size_t *size_x)
{
	int			i;
	int			j;
	int			is_neg;

	i = -1;
	if (!(check_size(values, size_x)))
		return (0);
	while (values[++i])
	{
		j = -1;
		while (values[i][++j])
		{
			if (values[i][j] == '-')
				is_neg = 1;
			else if (is_neg)

		}
	}
	printf("\n");
	(void)list;
	return (1);
}

int		check_rows(int fd, t_list *list)
{
	char		*rows;
	int			ret;
	size_t		size_x;

	size_x = 0;
	while ((ret = get_next_line(fd, &rows)) > 0)
		if (!(assign_maillon(ft_strsplit(rows, ' '), list, &size_x)))
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
