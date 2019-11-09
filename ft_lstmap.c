/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 20:11:27 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/09 22:14:10 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*firstofthelist;
	t_list	*next;

	newlist = malloc(sizeof(t_list));
	if (newlist == NULL)
		return (NULL);
	firstofthelist = newlist;
	while (lst->next != NULL)
	{
		next = malloc(sizeof(t_list));
		if (next == NULL)
			return (NULL);
		newlist->content = f(lst->content);
		newlist->next = next;
		newlist = newlist->next;
	}
	if (lst->next == NULL)
	{
		newlist->content = f(lst->content);
		newlist->next = NULL;
	}
	return (firstofthelist);
}
