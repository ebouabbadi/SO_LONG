/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:07:00 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/30 18:55:19 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

void	print_error(char *name);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
int	    ft_strncmp(char *s1,char *s2, int n);
void	ft_putnbr_fd(int n, int fd);

#endif