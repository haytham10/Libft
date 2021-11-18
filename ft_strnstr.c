/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:51:34 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/14 21:53:55 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 || s1 == s2)
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j] && i + j < len)
			j++;
		if (!len && !s2[j])
			return (NULL);
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
