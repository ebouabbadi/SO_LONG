/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 12:32:25 by ebouabba          #+#    #+#             */
/*   Updated: 2022/03/31 22:24:24 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static	char	*ft_substrr(char const *s, int start, int len)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_nbr_tab(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			if ((i == 0 || s[i - 1] == c))
				count++;
			i++;
		}
	}
	return (count);
}

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (0);
	tab = (char **)malloc((ft_nbr_tab(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (tab);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		while (s[len] != '\0' && s[len] != c)
			len++;
		if (len != 0)
			tab[i++] = ft_substrr(s, 0, len);
		if (!tab[i - 1] && len != 0)
			return (ft_free(tab));
		s = s + len;
	}
	tab[i] = NULL;
	return (tab);
}
