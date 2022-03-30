/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_window.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:51:53 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/30 18:43:07 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int ft_exit(t_list *ptr)
{
    mlx_destroy_window(ptr->mlx, ptr->window);
    ft_putstr_fd("<-------!!------->\n", 1);
    exit(0);
    return (0);
}