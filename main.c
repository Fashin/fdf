/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 14:59:14 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/16 16:10:01 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_puterror(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}

int		main(int ac, char **av)
{
	t_info	*info;

	if (!(info = (t_info *)malloc(sizeof(t_info))))
		return (0);
	if (ac == 2)
	{
		if (!(init(av[1], info)))
			ft_puterror("Fatal error from init program");
	}
	else
		ft_puterror("Only one file needed\n");
	return (0);
}
