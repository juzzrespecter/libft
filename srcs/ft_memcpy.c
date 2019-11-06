/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:55:42 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/05 14:01:17 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *sdst;
	char *ssrc;

	sdst = (char *)dst;
	ssrc = (char *)src;
	while (n--)
	{
		*sdst = *ssrc;
		sdst++;
		ssrc++;
	}
}
