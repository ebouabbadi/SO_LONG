# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/27 14:07:22 by ebouabba          #+#    #+#              #
#    Updated: 2022/04/01 01:14:47 by ebouabba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Utils/print.c Utils/ft_putstr_fd.c Utils/ft_split.c Utils/ft_strncmp.c Utils/ft_putnbr_fd.c \
			Get_next_line/get_next_line_utils.c Get_next_line/get_next_line.c \
				Check/ft_check_maps.c Check/ft_split_maps.c Check/ft_check_to_element.c \
					Push_image/push_image_to_window.c Push_image/put_image.c  Push_image/affiche.c \
						Play_game/move_player.c Play_game/play_game.c Play_game/key_code.c Play_game/ft_exit_window.c \
							so_long.c
										
SRC_BNS = bonus/Utils/print.c bonus/Utils/ft_putstr_fd.c bonus/Utils/ft_split.c bonus/Utils/ft_strncmp.c bonus/Utils/ft_putnbr_fd.c bonus/Utils/ft_itoa.c\
			bonus/Get_next_line/get_next_line_utils.c bonus/Get_next_line/get_next_line.c \
				bonus/Check/ft_check_maps.c bonus/Check/ft_split_maps.c bonus/Check/ft_check_to_element.c \
					bonus/Push_image/push_image_to_window.c bonus/Push_image/put_image.c  bonus/Push_image/affiche.c \
						bonus/Play_game/move_player.c bonus/Play_game/play_game.c bonus/Play_game/key_code.c bonus/Play_game/ft_exit_window.c bonus/play_game/ft_animation.c \
							bonus/so_long.c
							
NAME = so_long
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HDR = so_long.h Get_next_line/get_next_line.h Utils/utils.h
GREEN = \033[1;36m
RED = \033[1;31m
OBJ = $(SRC:.c=.o)
OBJ_BNS = $(SRC_BNS:.c=.o)

all: $(NAME)
bonus: so_long_bonus

$(NAME): $(OBJ) $(HDR)
	@$(CC) $(CFLAGS) -o $(NAME) -lmlx -framework OpenGL -framework Appkit $(OBJ)
	@echo "$(GREEN)--> Compiled success"

so_long_bonus: $(OBJ_BNS)
	@$(CC) $(CFLAGS) -o so_long_bonus -lmlx -framework OpenGL -framework Appkit  $(OBJ_BNS)
	@echo "$(GREEN)--> Compiled bonus success"
	
%.o: %.c $(HDR)
	@$(CC) $(CFLAGS) -c $< -o $@
	
clean: 
	@$(RM) $(OBJ) $(OBJ_BNS)
	@echo "$(RED)--> Object files cleaned"

fclean: clean
	@$(RM) $(NAME) so_long_bonus
	@echo "$(RED)--> Name cleaned"

re: fclean all

.PHONY: fclean clean all re
