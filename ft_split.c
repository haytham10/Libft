/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 00:06:59 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/13 00:17:39 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static int	ft_count(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*my_substr(char const *s, size_t len)
{
	int		n;
	char	*dest;

	n = len;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s, len + 1);
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;
	int		len;
	int		i;

	words = ft_count(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = length((char *)s, c);
		res[i] = my_substr(s, len);
		if (!res[i])
			return (NULL);
		s += len;
		i++;
	}
	res[i] = NULL;
	return (res);
}
