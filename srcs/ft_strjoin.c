/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:25:13 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/06 17:41:25 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_lenstr(char const *s)
{
	int size;
	int i;

	size = 0;
	while (s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char *strjoin;
	char *ptr;

	strjoin = malloc(sizeof(char) * (ft_lenstr(s1) + ft_lenstr(s2) + 1));
	ptr = strjoin;
	while (*s1)
	{
		*strjoin = *s1;
		strjoin++;
		s1++;
	}
	while (*s2)
	{
		*strjoin = *s2;
		strjoin++;
		s2++;
	}
	*strjoin = 0;
	return (ptr);
}
