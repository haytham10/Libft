/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:59:41 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/06 12:18:14 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		n;
	char	*dest;

	n = len - start;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (NULL);
	ft_strncpy(dest, (s + start), n);
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "implementation of ft_substr";
	int	m = 7;
	int	n = 12;
	char	*dest = ft_substr(src, m, n);

	printf("%s\n", dest);
	return (0);
}*/
