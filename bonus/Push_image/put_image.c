/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:31:41 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/01 01:06:08 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_image(char c, t_list *ptr, int i, int j)
{
	if (c == 'P')
		mlx_put_image_to_window(ptr->mlx,
			ptr->window, ptr->player, j * 40, i * 40);
	else if (c == 'C')
		mlx_put_image_to_window(ptr->mlx,
			ptr->window, ptr->collectible, j * 40, i * 40);
	else if (c == 'E')
		mlx_put_image_to_window(ptr->mlx,
			ptr->window, ptr->exit, j * 40, i * 40);
	else if (c == '1')
		mlx_put_image_to_window(ptr->mlx,
			ptr->window, ptr->wall, j * 40, i * 40);
	else if (c == '0')
		mlx_put_image_to_window(ptr->mlx,
			ptr->window, ptr->space, j * 40, i * 40);
	else if (c == 'X')
		mlx_put_image_to_window(ptr->mlx,
			ptr->window, ptr->xright, j * 40, i * 40);
	else if (c == 'Z')
		mlx_put_image_to_window(ptr->mlx,
			ptr->window, ptr->xleft, j * 40, i * 40);
}
