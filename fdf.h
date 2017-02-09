/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:59:10 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/09 16:45:35 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
#include "minilibx/mlx.h"
#include "get_next_line/get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>
#include <math.h>

/*
 *Ne pas oublier d'enlever ces fonctions avant de push
 *
 * */
#include <stdio.h>
/*****************************************************/
typedef struct			s_point
{
		int				x;
		int				y;
		int				z;
}						t_point;

typedef struct			s_map
{
		t_point			point;
		struct s_map	*next;
}						t_map;

int		ft_bind_key(int keycode, void *params);
int		ft_parse_map(char *filename);
#endif
