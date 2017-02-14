# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/14 14:51:59 by cbeauvoi          #+#    #+#              #
#    Updated: 2017/02/14 20:16:21 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 	main.c init.c ft_pixel_put.c ft_parse_map.c \
	
INC = get_next_line.c

INC_PATH = includes/get_next_line

INC_OBJ = $(addprefix $(INC_PATH)/, $(INC))

OBJ_NAME = $(SRC:.c=.o)

OBJ_PATH = obj

OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

NAME = fdf

FLAGS = -Wall -Werror -Wextra

MINILIBXFLAG = -lmlx -framework OpenGL -framework AppKit

CC = gcc

all: lib $(OBJ) $(INC)

$(NAME): all

$(OBJ_PATH)/%.o: ./%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(FLAGS) -o $@ -c $^

$(INC): $(INC_OBJ)
	$(CC) $(FLAGS) -c $^ -o $(OBJ_PATH)/$(INC:.c=.o)

re: fclean all 

clean:
	rm -rfv $(OBJ_PATH) 
	rm -rfv $(OBJ)

fclean: clean
	rm -rfv $(NAME)

lib:
	make -C libft
