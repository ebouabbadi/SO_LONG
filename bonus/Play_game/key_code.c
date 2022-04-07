/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_code.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:46:02 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/30 20:29:50 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	key_code_0(t_list *ptr)
{
	if (ptr->tab[ptr->i][ptr->j - 1] != '1' &&
			ptr->tab[ptr->i][ptr->j - 1] != 'E')
		move_player_left(ptr);
	else if (ptr->tab[ptr->i][ptr->j - 1] == 'E' && ptr->c == 0)
	{
		ft_putstr_fd("<-----Success---->\n", 1);
		exit(0);
	}
}

void	key_code_1(t_list *ptr)
{
	if (ptr->tab[ptr->i + 1][ptr->j] != '1' &&
			ptr->tab[ptr->i + 1][ptr->j] != 'E')
		move_player_under(ptr);
	else if (ptr->tab[ptr->i + 1][ptr->j] == 'E' && ptr->c == 0)
	{
		ft_putstr_fd("<-----Success---->\n", 1);
		exit(0);
	}
}

void	key_code_2(t_list *ptr)
{
	if (ptr->tab[ptr->i][ptr->j + 1] != '1' &&
			ptr->tab[ptr->i][ptr->j + 1] != 'E')
		move_player_right(ptr);
	else if (ptr->tab[ptr->i][ptr->j + 1] == 'E' && ptr->c == 0)
	{
		ft_putstr_fd("<-----Success---->\n", 1);
		exit(0);
	}
}

void	key_code_13(t_list *ptr)
{
	if (ptr->tab[ptr->i - 1][ptr->j] != '1' &&
			ptr->tab[ptr->i - 1][ptr->j] != 'E')
		move_player_above(ptr);
	else if (ptr->tab[ptr->i - 1][ptr->j] == 'E' && ptr->c == 0)
	{
		ft_putstr_fd("<-----Success---->\n", 1);
		exit(0);
	}
}
