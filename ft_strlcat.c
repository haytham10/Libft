/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:31:02 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/02 12:41:14 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, char	*src, size_t n)
{
	int	i;
	int	s;

	i = 0;
	if (src[i] == 0)
	{
		s = ft_strlen(dest);
		return (s);
	}
	s = ft_strlen(dest);
	while (src[i] && i < n && n != '\0')
	{
		dest[s] = src[i];
		i++;
		s++;
	}
	dest[s] = '\0';
	return (s);
}
