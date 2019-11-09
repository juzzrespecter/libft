/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 18:24:53 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/09 19:05:30 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	ft_lstnew(void const *content)
{
	t_list	newlist;

	newlist.content = content;
	newlist = malloc(sizeof(t_list));
	newlist.next = NULL;
	return (newlist);
}
