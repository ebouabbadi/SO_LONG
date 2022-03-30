/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_maps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:39:42 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/30 17:28:59 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include"../Utils/utils.h"

static  void    check_to_wall(t_list *ptr)
{
    int i;
    int j;

    i = 0;
    while (ptr->tab[i])
    {
        j = 0;
        while(ptr->tab[i][j])
        {
            if (ptr->tab[i][0] != '1' || ptr->tab[i][ptr->x - 1] != '1')
                print_error("Error\nInvalid Wall de Map!1");
            j++;
        }
        i++;
    }
}

static void    check_wall(char *line)
{
    int i;

    i = 0;
    while(line[i])
    {
        if (line[i] != '1')
            print_error("Error\nInvalid Wall de Map!2\n");
        i++;
    }
}

void    check_maps(t_list *ptr)
{
    ft_split_maps(ptr);
    check_wall(ptr->tab[0]);
    check_wall(ptr->tab[ptr->y - 1]);
    check_to_wall(ptr);
    check_to_element(ptr);
}
