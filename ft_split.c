/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:11:38 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/07 10:55:48 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static  void    ft_free(int n, char **res)
{
    while (n >= 0)
    {
        if (res[n] != NULL)
            free(res[n]);
        n--;
    }
    free(res);
}

static int	n_w(char const *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] < 32 || s[i] > 126)
			return (0);
		else
		{
			n++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (n);
}

static int	ft_allocate(char const *s, char **res, char c)
{
	int	i;
	int	n;
	int	size;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			s = 0;
			while (s[i] && s[i++] != c)
				size++;
			res[n] = NULL;
			if (!(res[n] = (char*)malloc(sizeof(*s) * size + 1)))
			{
				ft_free(n, res);
				return (0);
			}
			n++;
		}
	}
	return (1);
}

static void	ft_fill(char const *s, char **res, char c)
{
	int	i;
	int	n;
	int	size;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = 0;
			while (s[i] && s[i] != c)
			{
				res[n][size] = s[i];
				size++;
				i++;
			}
			res[n][size] = '\0';
			n++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**res;

	if (s == NULL || c == '\0')
	{
		if (!(res = (char**)malloc(sizeof(char*))))
			return (0);
		res[0] = 0;
		return (res);
	}
	words = n_w(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * words + 1)))
		return (0);
	ft_allocate(s, res, c);
	ft_fill(s, res, c);
	res[words] = 0;
	return (res);
}