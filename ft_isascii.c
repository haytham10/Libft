/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:21:05 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/02 11:23:21 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 127 && str[i] >= 0)
			i++;
		else
			return (0);
	}
	return (1);
}