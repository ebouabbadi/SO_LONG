/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_image_to_window.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:12:29 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/31 21:16:44 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	push_image_to_window(t_list *ptr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	affichage(ptr);
	while (ptr->tab[i])
	{
		j = 0;
		while (ptr->tab[i][j])
		{
			put_image(ptr->tab[i][j], ptr, i, j);
			j++;
		}
		i++;
	}
	ft_putstr_fd("<-----So_long---->\n", 1);
}
