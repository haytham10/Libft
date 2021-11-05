/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:48:54 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/05 02:58:34 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <string.h>
#include <stdio.h>*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	s;
	char	*p;

	s = count * size;
	p = ft_malloc(s);
	if (!p)
		return (NULL);
	ft_bzero(p, count);
	return (p);
}

/*void	fail(void)
{
	printf("memory could not be allocated"); exit(EXIT_FAILURE);
}

int	main(void)
{
	char	*name = malloc(5 * sizeof(char));
	if (name == NULL) fail();
	strcpy(name, "I am");
///////////////////////////////////
	int	*n = ft_calloc(2, sizeof(int));
	if (n == NULL)
		fail();
	n[0] = 1;
	n[1] = 2;
//////////////////////////////////
	name = realloc(name, 9 * sizeof(char));
	if (name == NULL) fail();
	strcat(name, " DA BEST");
/////////////////////////////////
	free(name);
	free(n);

	return EXIT_SUCCESS;
}*/
