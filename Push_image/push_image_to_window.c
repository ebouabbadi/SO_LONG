/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_image_to_window.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:12:29 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/30 18:47:52 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void    push_image(char c, t_list *ptr, int j, int i)
{
    if (c == 'P')
    {
        affichage(ptr, c);
        put_image(c,ptr,i,j);
    }
    else if (c == 'C')
    {
        affichage(ptr, c);
        put_image(c,ptr,i,j);
    }
    else if (c == 'E')
    {
        affichage(ptr, c);
        put_image(c,ptr,i,j);
    }
    else if (c == '1')
    {
        affichage(ptr, c);
        put_image(c,ptr,i,j);
    }
    else if (c == '0')
    {
        affichage(ptr, c);
        put_image(c,ptr,i,j);
    }
}

void    push_image_to_window(t_list *ptr)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (ptr->tab[i])
    {
        j = 0;
        while(ptr->tab[i][j])
        {
            push_image(ptr->tab[i][j],ptr,j, i);
            j++;
        }
        i++;
    }
    ft_putstr_fd("<-----So_long---->\n",1);
}
