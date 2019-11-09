/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 20:11:27 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/09 20:41:05 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newlistfirst;
	t_list	*next;

	newlist = malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	newlistfirst = newlist;
	while (*lst->next != NULL)
	{
		next = malloc(sizeof(t_list));
		if (next == NULL)
			return (NULL);
		*newlist->content = f(*lst->content);
		if (*(lst->next == NULL)
			*newlist->next = NULL;
		else
		{
			next = malloc(sizeof(t_list));
			if (next == NULL)
				return (NULL);
			*newlist->next = next;
		}
	}
	return (newlistfirst);
}
