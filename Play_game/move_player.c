/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:19:10 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/30 18:50:57 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    move_player_right(t_list *ptr)
{
    if (ptr->tab[ptr->i][ptr->j + 1] == 'C')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j + 1) * 40, ptr->i * 40);
        ptr->c--;
        ptr->tab[ptr->i][ptr->j + 1] = '0';
    }
    else if (ptr->tab[ptr->i][ptr->j + 1] == '0' ||
        ptr->tab[ptr->i][ptr->j + 1] == 'P')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j + 1) * 40, ptr->i * 40);
    }
    mlx_put_image_to_window(ptr->mlx,
    ptr->window, ptr->space,(ptr->j) * 40, ptr->i * 40);
    ptr->j++;
    ft_putstr_fd("<-----Move-----> ", 1);
    ft_putnbr_fd(ptr->size, 1);
    ft_putstr_fd("\n", 1);
    ptr->size++;
        
}

void    move_player_left(t_list *ptr)
{
    if (ptr->tab[ptr->i][ptr->j - 1] == 'C')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j - 1) * 40, ptr->i * 40);
        ptr->c--;
        ptr->tab[ptr->i][ptr->j - 1] = '0';
    }
    else if (ptr->tab[ptr->i][ptr->j - 1] == '0' ||
             ptr->tab[ptr->i][ptr->j - 1] == 'P')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j - 1) * 40, ptr->i * 40);
    }
    mlx_put_image_to_window(ptr->mlx,
    ptr->window, ptr->space,(ptr->j) * 40, ptr->i * 40);
    ptr->j--;
    ft_putstr_fd("<-----Move-----> ", 1);
    ft_putnbr_fd(ptr->size, 1);
    ft_putstr_fd("\n", 1);
    ptr->size++;
}

void    move_player_above(t_list *ptr)
{
    if (ptr->tab[ptr->i - 1][ptr->j] == 'C')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j) * 40, (ptr->i - 1) * 40);
        ptr->c--;
        ptr->tab[ptr->i - 1][ptr->j] = '0';
    }
    else if (ptr->tab[ptr->i - 1][ptr->j] == '0' ||
        ptr->tab[ptr->i - 1][ptr->j] == 'P')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j) * 40, (ptr->i - 1) * 40);
    }
    mlx_put_image_to_window(ptr->mlx,
    ptr->window, ptr->space, ptr->j * 40, ptr->i * 40);
    ptr->i--;
    ft_putstr_fd("<-----Move-----> ", 1);
    ft_putnbr_fd(ptr->size, 1);
    ft_putstr_fd("\n", 1);
    ptr->size++;
}

void    move_player_under(t_list *ptr)
{
    if (ptr->tab[ptr->i + 1][ptr->j] == 'C')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j) * 40, (ptr->i + 1)* 40);
        ptr->c--;
        ptr->tab[ptr->i + 1][ptr->j] = '0';
    }
    else if (ptr->tab[ptr->i + 1][ptr->j] == '0' ||
             ptr->tab[ptr->i + 1][ptr->j] == 'P')
    {
        mlx_put_image_to_window(ptr->mlx,
        ptr->window,ptr->player,(ptr->j) * 40, (ptr->i + 1)* 40);
    }
    mlx_put_image_to_window(ptr->mlx,
    ptr->window, ptr->space,(ptr->j) * 40, ptr->i * 40);
    ptr->i++;
    ft_putstr_fd("<-----Move-----> ", 1);
    ft_putnbr_fd(ptr->size, 1);
    ft_putstr_fd("\n", 1);
    ptr->size++;
}