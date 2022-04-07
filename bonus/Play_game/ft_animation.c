/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:01:13 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/01 00:54:19 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static	void	func_left(t_list *ptr, int i, int j)
{
	mlx_put_image_to_window(ptr->mlx,
		ptr->window, ptr->xleft, j * 40, i * 40);
	ptr->tab[i][j] = 'Z';
}

static	void	func_right(t_list *ptr, int i, int j)
{
	mlx_put_image_to_window(ptr->mlx,
		ptr->window, ptr->xright, j * 40, i * 40);
	ptr->tab[i][j] = 'X';
}

int	ft_animation(t_list *ptr)
{
	int	i;
	int	j;	

	i = -1;
	while (ptr->tab[++i])
	{
		j = -1;
		while (ptr->tab[i][++j])
		{
			if (ptr->tab[i][j] == 'X')
				func_left(ptr, i, j);
			else if (ptr->tab[i][j] == 'Z')
				func_right(ptr, i, j);
		}
	}
	i = -1;
	while (++i < 70000000)
		;
	return (0);
}
