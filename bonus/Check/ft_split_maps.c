/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_maps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:57:28 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/01 00:58:45 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static	int	pack(char *str)
{
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

static	void	ft_check_line(t_list *ptr)
{
	int	y;
	int	len_0;
	int	len;

	len_0 = ft_strlen(ptr->tab[0]);
	len = 1;
	y = 0;
	while (ptr->tab[y])
		y++;
	while (ptr->tab[len])
	{
		if (len_0 != ft_strlen(ptr->tab[len]))
			print("Error\nInvalid Map!");
		len++;
	}
	if (!ptr->tab[0] || pack(ptr->maps) + 1 != y)
		print("Error\nInvalid Map!");
	ptr->y = y;
}

void	ft_split_maps(t_list *ptr)
{
	int	fd;

	fd = open(ptr->argv[1], O_RDONLY);
	if (fd < 0)
		print("Error\nCan't open this file\n");
	ptr->map = get_next_line(fd);
	if (!ptr->map)
		print("Error\nInvalid Map!");
	ptr->maps = ft_strjoin(ptr->maps, ptr->map);
	free(ptr->map);
	while (ptr->map == get_next_line(fd))
	{	
		if (!ptr->map)
		{
			free(ptr->map);
			break ;
		}
		ptr->maps = ft_strjoin(ptr->maps, ptr->map);
		free(ptr->map);
	}
	ptr->tab = ft_split(ptr->maps, '\n');
	ft_check_line(ptr);
	ptr->x = ft_strlen(ptr->tab[0]);
}
