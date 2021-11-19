/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 01:06:59 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/19 01:18:29 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	while (lst)
	{
		ft_lstiter(lst, f);
		lst = lst->next;
	}
}
