/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:36:44 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 14:38:47 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minilibx/mlx.h"
#include <stdio.h>
#include "../fdf.h"

int		main(int ac, char **av)
{
	/*	
 *	void *mlx_ptr;
	void *win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "This is a title");
	mlx_loop(mlx_ptr);*/
	if (ac != 2)
		return (0);
		//ft_exit("usage: ./fdf <nom_de_votre_map>.fdf");
	//	if (!(checker(av[1])))
	(void)av;
	return (0);
}
