/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:02:29 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/05 14:07:33 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *sdst;
	char *ssrc;

	sdst = (char *)dst;
	ssrc = (char *)src;
	while (*ssrc != (unsigned char)c && n--)
	{
		if (*ssrc == (unsigned char)c)
			return (sdst + 1);
		*sdst = *ssrc;
		ssrc++;
		sdst++;
	}
	return (NULL);
}	
