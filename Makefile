# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <cbeauvoi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/14 11:08:40 by cbeauvoi          #+#    #+#              #
#    Updated: 2018/06/11 14:58:26 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CFLAGS += -Wall -Wextra -Werror

SRCS = main.c checker.c

LIB = ./libft/libft.a
MINILIBX = -I ./minilibx -lmlx -framework OpenGL -framework AppKit
CC = gcc
SRC = $(addprefix src/, $(SRCS))
OBJ = $(SRC:.c=.o)

# COLOR
C_GOOD = "\033[32m"
C_DURING = "\033[36m"
RESET = "\033[00m"

# MESSAGE
SUCCESS = $(C_GOOD)COMPILATION SUCCEEDED

all: $(NAME)

$(NAME): $(OBJ)
	@make re -C libft/
	@echo $(C_DURING)"Compiling" [ $(NAME) . . . ]
	@$(CC) $(CFLAGS) $(OBJ) $(LIB) $(MINILIBX) -o $(NAME)
	@echo $(SUCCESS) $(RESET)

clean:
		@/bin/rm -f $(OBJ)
		@make clean -C libft/
		@echo $(C_GOOD)".o FILES DELETED" $(RESET)

fclean: clean
		@/bin/rm -f $(NAME)
		@/bin/rm -rf $(NAME).dSYM
		@make fclean -C libft/
		@echo $(C_GOOD)"EXECUTABLE FILE DELETED" $(RESET)

re: fclean all
