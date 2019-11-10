/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 20:11:27 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/10 20:52:42 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	(void)del;
	t_list	*nlst;
	t_list	*alst;
	t_list	*next;

	nlst = malloc(sizeof(t_list));
	if (nlst == NULL)
		return (NULL);
	alst = nlst;
	while (lst->next != NULL)
	{
		next = malloc(sizeof(t_list));
		if (next == NULL)
			return (NULL);
		nlst->content = f(lst->content);
		nlst->next = next;
		nlst = nlst->next;
	}
	if (lst->next == NULL)
	{
		nlst->content = f(lst->content);
		nlst->next = NULL;
	}
	return (alst);
}
