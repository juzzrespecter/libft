/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:07:41 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/05 14:45:01 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sdst;
	char	*ssrc;
	char	temp[len];
	int		i;

	sdst = (char *)dst;
	ssrc = (char *)src;
	i = 0;
	while (i < len)
	{
		temp[i] = *ssrc;
		ssrc++;
	}
	while (len--)
	{
		*sdst = *temp;
		sdst++;
		temp++;
	}
}
