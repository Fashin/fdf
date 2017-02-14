# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 14:51:59 by cbeauvoi          #+#    #+#              #
#    Updated: 2017/02/14 18:16:49 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc -Wall -Werror -Wextra

LDFLAGS = -Llibft

LDLIBS = libft/libft.a

SRC_NAME = main.c init.c ft_parse_map.c ft_pixel_put.c

SRC_PATH = .

OBJ_PATH = .

INC_NAME = minilibx/mlx.h get_next_line/get_next_line.h

INC_PATH = includes

INC_FLAGS = -Iincludes

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME)) 
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))

all: $(NAME) 

$(NAME): $(OBJ)
	$(CC) $(LDFAGS) $(LDLIBS) $^ -o $@ 

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(INC_FLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)

fclean: clean
	rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
