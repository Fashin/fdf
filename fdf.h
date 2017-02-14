/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:59:10 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/14 18:49:17 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
#include "includes/minilibx/mlx.h"
#include "includes/get_next_line/get_next_line.h"
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
		char			z;
}						t_point;

typedef struct			s_info
{
		void			*mlx;
		void			*win;
		int				height;
		int				width;
}						t_info;

void			ft_pixel_put(t_info *info, t_list *list);
void			init(t_info *info, t_list *list);
t_list			*ft_parse_map(char *filename, t_info *info, t_list *list);
#endif
