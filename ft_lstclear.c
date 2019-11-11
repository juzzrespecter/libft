/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:59:11 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 15:04:55 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *first;
	t_list *current;
	t_list *next;

	first = *lst;
	current = *lst;
	while (current->next != NULL)
	{
		del(current->content);
		next = current->next;
		free(current);
		current = next;
	}
	del(current->content);
	free(current);
	first = NULL;
}
