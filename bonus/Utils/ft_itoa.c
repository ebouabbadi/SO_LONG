/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:22:32 by ebouabba          #+#    #+#             */
/*   Updated: 2022/04/01 01:06:35 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = ft_strlen(src);
	if (dstsize == 0)
		return (k);
	while (src[i] != '\0' && dstsize - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (k);
}

static int	ft_len_nbr(int nbr)
{
	int	len_nbr;

	len_nbr = 0;
	if (nbr <= 0)
		len_nbr++;
	while (nbr)
	{
		nbr /= 10;
		len_nbr++;
	}
	return (len_nbr);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len_n;

	len_n = ft_len_nbr(n);
	string = malloc(sizeof(char) * len_n + 1);
	if (!string)
		return (NULL);
	string[len_n--] = '\0';
	if (n == -2147483648)
		ft_strlcpy(string, "-2147483648", ft_len_nbr(n) + 1);
	if (n == 0)
		string[0] = '0';
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		string[len_n] = n % 10 + '0';
		n = n / 10;
		len_n--;
	}
	return (string);
}
