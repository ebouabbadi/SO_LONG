/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:07:17 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/01 00:43:37 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	ptr->count = 1;
	ptr->argv = av;
	ptr->maps = NULL;
	if (ac != 2)
		print("Error\nInvalide Argumments\n");
	check_maps(ptr);
	ptr->mlx = mlx_init();
	ptr->window = mlx_new_window(ptr->mlx,
			ptr->x * 40, ptr->y * 40, "./so_long");
	push_image_to_window(ptr);
	mlx_loop_hook(ptr->mlx, ft_animation, ptr);
	mlx_hook(ptr->window, 17, 1L << 2, ft_exit, ptr);
	mlx_hook(ptr->window, 2, 1L << 1, play_game, ptr);
	mlx_loop(ptr->mlx);
}
