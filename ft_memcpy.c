/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:55:42 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/10 21:06:59 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *csrc;
	char *cdst;
	char *ptr;

	if (src == NULL)
		return (NULL);
	csrc = (char *)src;
	cdst = (char *)dst;
	ptr = cdst;
	while (n--)
	{
		*cdst = *csrc;
		cdst++;
		csrc++;	
	}
	return (ptr);
}
