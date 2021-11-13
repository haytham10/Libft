/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:44:42 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/13 01:46:39 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	if (!src || !dst)
		return (NULL);
	size--;
	srclen = strlen(src);
	if (srclen > size)
		srclen = size;
	ft_memcpy(dst, src, srclen);
	dst[srclen] = '\0';
	return (srclen);
}
