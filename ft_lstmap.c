/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 20:11:27 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 15:22:44 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*alst;
	t_list	*next;

	if (!lst)
		return (NULL);
	nlst = malloc(sizeof(t_list));
	if (nlst == NULL)
		return (NULL);
	alst = nlst;
	while (lst != NULL)
	{
		next = malloc(sizeof(t_list));
		if (next == NULL)
			return (NULL);
		if (!del)
			nlst->content = f(lst->content);
		else
			del(nlst->content);
		nlst->next = next;
		nlst = nlst->next;
		lst = lst->next;
	}
	return (alst);
}
