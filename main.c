/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 14:59:14 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/14 19:26:47 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_puterror(char *str)
{
	ft_putstr_fd(str, 2);
	//exit();
}

int		main(int ac, char **av)
{
	t_info	*info;
	t_list	*list;

	if (ac != 2)
		ft_puterror("Only one file needed");
	list = ft_lstnew(NULL, 0);
	info = NULL;
	list = ft_parse_map(av[1], info, list);
	return (0);
}
