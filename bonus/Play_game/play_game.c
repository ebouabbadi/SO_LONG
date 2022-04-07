/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   play_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:18:57 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/30 20:51:14 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	play_game(int key, t_list *ptr)
{
	if (key == 2)
		key_code_2(ptr);
	if (key == 0)
		key_code_0(ptr);
	if (key == 13)
		key_code_13(ptr);
	if (key == 1)
		key_code_1(ptr);
	if (key == 53)
	{
		ft_putstr_fd("<-------!!------->\n", 1);
		exit(1);
	}
	return (0);
}
