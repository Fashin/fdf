/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 14:37:53 by cbeauvoi          #+#    #+#             */
/*   Updated: 2018/06/11 15:28:21 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
#define FDF_H

#include "minilibx/mlx.h"
#include "libft/get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

typedef	struct				s_map
{
		int					pos_x;
		int					pos_y;
		int					value;
}							t_map;

int			checker(char *map_name, t_list *list);

#endif
