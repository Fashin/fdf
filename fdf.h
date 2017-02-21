/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:59:10 by cbeauvoi          #+#    #+#             */
/*   Updated: 2017/02/21 15:09:05 by cbeauvoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
#include "libft/libft.h"
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


typedef struct			s_info
{
		void			*mlx;
		void			*win;
		void			*img;
		char			*data;
		int				bpp;
		int				sl;
		int				endian;
		int				height;
		int				width;
}						t_info;

typedef struct			s_point
{
			int			x1;
			int			y1;
			int			x2;
			int			y2;
			int			dx;
			int			dy;
}						t_point;

void			ft_puterror(char *error);
int				init(char *file, t_info *info);
int				ft_launch_map_resolve(t_info *info, char *points);
char			*ft_parse_map(char *filename, t_info *info);
#endif
