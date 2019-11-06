/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:01:56 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/06 18:05:36 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*hptr;
	const char	*nptr;
	int			i;

	i = 0;
	nptr = needle;
	if (!*needle)
	   return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			hptr = haystack;
			while (*haystack == *needle)
			{
				if (!*(needle + 1) || i == len - 1)
					return ((char *)hptr);
				haystack++;
				needle++;
			}
			needle = nptr;
		}
		haystack++;
	}
	return (NULL);
}
