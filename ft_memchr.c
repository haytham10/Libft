/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 23:48:08 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/13 02:20:53 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t					i;
	const unsigned char	*s;

	i = 0;
	s = (const unsigned char *)str;
	while (i < n && s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((void *)(str + i));
	return (NULL);
}
