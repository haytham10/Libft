/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:56:21 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/03 13:02:14 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dest, const void *restrict src,
		int c, size_t n)
{
	size_t				i;
	unsigned char		*pt1;
	const unsigned char	*pt2;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	pt1 = (unsigned char *)dest;
	pt2 = (const unsigned char *)src;
	while (i < n)
	{
		pt1[i] = pt2[i];
		if (pt2[i] == (const unsigned char)c)
		{
			i++;
			return (dest + i);
		}
		i++;
	}
	return (NULL);
}
