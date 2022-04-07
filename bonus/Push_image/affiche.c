/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   affiche.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:36:37 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/01 01:05:33 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	affichage(t_list *ptr)
{
	int	width;
	int	height;

	ptr->player = mlx_xpm_file_to_image(ptr->mlx,
			"./Image/player.xpm", &width, &height);
	ptr->collectible = mlx_xpm_file_to_image(ptr->mlx,
			"./Image/collectible.xpm", &width, &height);
	ptr->exit = mlx_xpm_file_to_image(ptr->mlx,
			"./Image/exit.xpm", &width, &height);
	ptr->wall = mlx_xpm_file_to_image(ptr->mlx,
			"./Image/wall.xpm", &width, &height);
	ptr->space = mlx_xpm_file_to_image(ptr->mlx,
			"./Image/space.xpm", &width, &height);
	ptr->xleft = mlx_xpm_file_to_image(ptr->mlx,
			"./Image/left.xpm", &width, &height);
	ptr->xright = mlx_xpm_file_to_image(ptr->mlx,
			"./Image/right.xpm", &width, &height);
}
