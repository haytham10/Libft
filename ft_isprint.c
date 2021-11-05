/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:23:59 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/02 11:25:47 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 126 && str[i] >= 32)
			i++;
		else
			return (0);
	}
	return (1);
}
