/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 19:13:49 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/09 19:33:57 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	lstsize;

	lstsize = 0;
	while (*lst->next != NULL)
	{
		lst = *lst->next;
		lstsize++;
	}
	return (lstsize);
}
