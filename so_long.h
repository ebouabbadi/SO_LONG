/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:07:19 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/29 18:57:19 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "mlx.h"
#include "Utils/utils.h"
#include "Get_next_line/get_next_line.h"

typedef struct t_list 
{
    int e;
    int p;
    int c;
    int fd;
    char **argv;
    int i;
    int y;
    int x;
    char *map;
    int j;
    int size;
    char *maps;
    char **tab;
    char *mlx;
    char *window;
    char *player;
    char *collectible;
    char *exit;
    char *space;
    char *wall;
}t_list;

void    ft_split_maps(t_list *ptr);
void    check_maps(t_list *ptr);
void    check_to_element(t_list *ptr);
void    push_image_to_window(t_list *ptr);
int     play_game(int key,t_list *ptr);
void    put_image(char c, t_list *ptr, int i, int j);
void    affichage(t_list *ptr,char c);
void    move_player_right(t_list *ptr);
void    move_player_left(t_list *ptr);
void    move_player_above(t_list *ptr);
void    move_player_under(t_list *ptr);
void    key_code_0(t_list *ptr);
void    key_code_1(t_list *ptr);
void    key_code_2(t_list *ptr);
void    key_code_13(t_list *ptr);
int     ft_exit(t_list *ptr);

#endif
