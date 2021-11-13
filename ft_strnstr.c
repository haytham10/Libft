/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:51:34 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/13 01:54:31 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (*s1 == '\0' || *s2 == '\0')
		return ((char *)s1);
	if (!s1 || !s2 || !n)
		return (NULL);
	i = -1;
	while (s1[++i] && n)
	{
		j = 0;
		len = n;
		while (s2[j] && s2[j] == s1[i + j] && len--)
		{
			j++;
			if (!s2[j])
				return ((char *)(s1 + i));
			if (!len && !s2[j])
				return (NULL);
		}
		n--;
	}
	return (NULL);
}
