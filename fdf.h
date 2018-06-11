/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:37:53 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 19:26:56 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H

#include "minilibx/mlx.h"
#include "libft/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

typedef	struct				s_map
{
		int					size_x;
		int					size_y;
		int					**map;
}							t_map;

int			checker(char *map_name, t_map *map);
int			ft_tablen(char **tab);

#endif
