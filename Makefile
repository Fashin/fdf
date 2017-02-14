# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 14:51:59 by cbeauvoi          #+#    #+#              #
#    Updated: 2017/02/14 19:01:21 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

PATH_SRC = ./

PATH_OBJ = ./

PATH_INC = ./libft

GNL_SRC = get_next_line.c

INC_PATH = ./includes

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEAD = fdf.h

SRC = ft_parse_map.c main.c init.c ft_pixel_put.c

OBJ = $(patsubst %.c, %.o, $(addprefix $(PATH_SRC), $(SRC)))

GNL_OBJ = $(GNL_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
		make -C libft/
		$(CC) $(CFLAGS) -I -$(PATH_INC) -c $(SRC) $(INC_PATH)/get_next_line/$(GNL_SRC)
		$(CC) -o $(NAME) $(OBJ) $(GNL_OBJ) -lm -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

re: fclean all

clean:
	make -C libft/ clean
	/bin/rm -fv $(OBJ)

fclean: clean
	make -C libft/ fclean
	/bin/rm -fv $(NAME)

.PHONY: all, re, clean, fclean
