/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:07:41 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/06 17:34:30 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*sdst;
	unsigned const char	*ssrc;
	unsigned char		temp[len];
	size_t				i;

	sdst = dst;
	ssrc = src;
	i = 0;
	while (i < len)
	{
		temp[i] = ssrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		sdst[i] = temp[i];
		i++;
	}
	return (dst);
}
