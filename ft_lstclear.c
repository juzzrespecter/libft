/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:59:11 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/09 20:05:46 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *listfirst;
	t_list *listnext;


	listfirst = lst;
	listnext = lst;
	while (*listnext->next != NULL)
	{
		listnext = *listnext->next;
		del(lst);
		free(lst);
	}
	listfirst = NULL;
}
