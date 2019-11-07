/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:34:57 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/07 15:31:51 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t 		tamsrc;
	size_t		tamdst;
	size_t 		size;
	const char 	*startsrc;

	tamsrc = 0;
	tamdst = 0;
	startsrc = src;
	while (*src)
	{
		tamsrc++;
		src++;
	}
	src = startsrc;
	while (*dst)
	{
		tamdst++;
		dst++;
	}
	if (tamdst > dstsize)
		size = dstsize + tamsrc;
	else
		size = tamdst + tamsrc;
	while (*src &&  dstsize > tamdst + 1)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (size);
}
