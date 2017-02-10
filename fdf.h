/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:59:10 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/10 16:45:14 by cbeauvoi         ###   ########.fr       */
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
		char			z;
}						t_point;

typedef struct			s_info
{
		void			*mlx;
		void			*win;
		int				height;
		int				width;
}						t_info;

int				ft_bind_key(int keycode, void *params);
void			ft_pixel_put(t_info *info, t_list *list);
void			init(t_info *info, t_list *list);
t_list			*ft_parse_map(char *filename, t_info *info, t_list *list);
#endif
