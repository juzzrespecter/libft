/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:57:12 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/12 19:39:24 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static size_t	ft_lenstr(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = 0;
	while (dst[size])
		size++;
	if (size < dstsize)
	{
		while (src[i] && (i + size + 1) < dstsize)
		{
			dst[size + i] = src[i];
			i++;
		}
		dst[size + i] = 0;
	}
	if (size < dstsize)
		return (size + ft_lenstr(src));
	else
		return (dstsize + ft_lenstr(src));
}
