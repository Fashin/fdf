/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:36:44 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 19:28:10 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		main(int ac, char **av)
{
	t_map		map;

	if (ac != 2)
		return (1);
	//ft_exit("usage: ./fdf <nom_de_votre_map>.fdf");
	map.size_x = 0;
	map.size_y = 0;
	map.map = NULL;
	if (!(checker(av[1], &map)))
		printf("error on map\n");
	return (0);
}
	/*	
 		void *mlx_ptr;
		void *win_ptr;
		mlx_ptr = mlx_init();
		win_ptr = mlx_new_window(mlx_ptr, 500, 500, "This is a title");
		mlx_loop(mlx_ptr);
	*/

