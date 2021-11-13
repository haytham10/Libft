/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:00:14 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/13 02:04:08 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		n;
	char	*dest;

	n = len - start;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, (s + start), n + 1);
	return (dest);
}
