/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:04:13 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/06 17:33:28 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t size;

	while (*src && dstsize - 1 > 0)
	{
		*dst = *src;
		dst++;
		src++;
		size++;
	}
	*dst = 0;
	return (size);
}
