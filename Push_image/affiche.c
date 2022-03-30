/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affiche.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:36:37 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/28 21:37:08 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void    affichage(t_list *ptr,char c)
{
    int width;
    int height;
    if (c == 'P')
        ptr->player = mlx_xpm_file_to_image(ptr->mlx,
        "/Users/ebouabba/Desktop/so_long/Image/player.xpm",
        &width, &height);
    else if (c == 'C')
         ptr->collectible =  mlx_xpm_file_to_image(ptr->mlx,
         "/Users/ebouabba/Desktop/so_long/Image/collectible.xpm",
         &width, &height);
    else if (c == 'E')
        ptr->exit =  mlx_xpm_file_to_image(ptr->mlx,
        "/Users/ebouabba/Desktop/so_long/Image/exit.xpm",
        &width, &height);
    else if (c == '1')
         ptr->wall = mlx_xpm_file_to_image(ptr->mlx,
         "/Users/ebouabba/Desktop/so_long/Image/wall.xpm",
         &width, &height);
    else if (c == '0')
         ptr->space =  mlx_xpm_file_to_image(ptr->mlx,
         "/Users/ebouabba/Desktop/so_long/Image/space.xpm",
         &width, &height);
}