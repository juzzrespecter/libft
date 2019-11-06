/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:17:20 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/04 19:29:41 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strrchr(const char *s, int c)
{
	char *lstoccr;

	lstoccr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			lstoccr = s;
		s++;
	}
	if (*s == (char)c)
		return (s);
	if (lstoccr == NULL)
		return (NULL);
	return (lstoccr);
}
