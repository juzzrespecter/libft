/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:16:13 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 20:51:36 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*memdst;
	char		memtemp[len];
	const char	*memsrc;
	size_t		i;

	memdst = dst;
	memsrc = src;
	i = 0;
	while (i < len)
	{
		memtemp[i] = memsrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		memdst[i] = memtemp[i];
		i++;
	}
	return (memdst);
}
