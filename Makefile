# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 14:07:22 by ebouabba          #+#    #+#              #
#    Updated: 2022/03/30 18:55:16 by ebouabba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Utils/ft_print_error.c Utils/ft_putstr_fd.c Utils/ft_split.c Utils/ft_strncmp.c Utils/ft_putnbr_fd.c \
			Get_next_line/get_next_line_utils.c Get_next_line/get_next_line.c \
				Check/ft_check_maps.c Check/ft_split_maps.c Check/ft_check_to_element.c \
					Push_image/push_image_to_window.c Push_image/put_image.c  Push_image/affiche.c \
						Play_game/move_player.c Play_game/play_game.c Play_game/key_code.c Play_game/ft_exit_window.c \
							so_long.c

NAME = so_long
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HDR = so_long.h Get_next_line/get_next_line.h Utils/utils.h
GREEN = \033[1;36m
RED = \033[1;31m
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(HDR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(HDR)
	@$(CC) $(CFLAGS) -lmlx -framework OpenGL -framework Appkit $(OBJ) -o $@
	@echo "$(GREEN)--> Compiled success"

clean: 
	@$(RM) $(OBJ)
	@echo "$(RED)--> Object files cleaned"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)--> Name cleaned"

re: fclean all