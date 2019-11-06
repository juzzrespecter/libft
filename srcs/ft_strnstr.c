/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:01:56 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/04 18:32:54 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	char *hptr;
	char *nptr;
	int i;

	i = 0;
	nptr = needle;
	if (!*needle)
	   return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			ptr = haystack;
			while (*haystack == *needle)
			{
				if (!*(needle + 1) || i = len - 1)
					return (ptr);
				haystack++;
				needle++;
			}
			needle = nptr;
		}
		haystack++;
	}
	return (NULL);
}
