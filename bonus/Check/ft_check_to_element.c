/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_to_element.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:12:58 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/01 00:58:07 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static	void	position(t_list *ptr, int i, int j)
{
	ptr->i = i;
	ptr->j = j;
}

static	void	element(char c, t_list *ptr)
{
	if (c == 'P')
		ptr->p++;
	else if (c == 'E')
		ptr->e++;
	else if (c == 'C')
		ptr->c++;
	else if (c == 'X')
		ptr->z++;
	else if (c != '1' && c != '0')
		print("Error\nInvalid de Map!");
}

void	check_to_element(t_list *ptr)
{
	int	i;
	int	j;

	ptr->e = 0;
	ptr->p = 0;
	ptr->c = 0;
	ptr->z = 0;
	i = 0;
	while (ptr->tab[i])
	{
		j = 0;
		while (ptr->tab[i][j])
		{
			if (ptr->tab[i][j] == 'P')
				position(ptr, i, j);
			element(ptr->tab[i][j], ptr);
			j++;
		}
		i++;
	}
	if (ptr->p > 1 || ptr->e == 0 || ptr->c == 0
		|| ptr->p == 0 || ptr->z == 0)
		print("Error\nInvalid de Map1!");
}
