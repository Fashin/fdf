/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:36:44 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 15:28:13 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fdf.h"

int		main(int ac, char **av)
{
	t_list		*list;

	if (ac != 2)
		return (1);
	//ft_exit("usage: ./fdf <nom_de_votre_map>.fdf");
	list = ft_lstnew(NULL, 0);	
	if (!(checker(av[1], list)))
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

