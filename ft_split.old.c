/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.old.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:25:19 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/07 09:25:10 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		n;
	char	*dest;

	n = len - start;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	strncpy(dest, (s + start), n);
	return (dest);
}

static	size_t	str_count(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	const char	*start;
	char		**split;

	split = (char**)malloc(((str_count(s, c)) + 1) * sizeof(*split));
			if (!split)
				return (0);
			i = 0;
			while (*s)
			{
				while (*s && *s == c)
					s++;
				start = s;
				len = 0;
				while (*s && *s == c)
				{
					s++;
					len++;
				}
				if (*(s - 1) != c)
					split[i++] = ft_substr(start , 0, len);
			}
			split[i] = 0;
			return (split);

}


int main()
{

	char s[]= "i just took a penies in my butt, i just want to know how it feels";
	printf("%s", ft_split(s," ")[0]);
}
