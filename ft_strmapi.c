/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:32:16 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/09 18:16:30 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_lenstr(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_cpystr(char const *src, char *dst)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	 		*newstring;
	unsigned int	i;

	newstring = malloc(sizeof(char) * (ft_lenstr(s) + 1));
	if (newstring == NULL)
		return (NULL);
	ft_cpystr(s, newstring);
	i = 0;
	while (newstring[i])
	{
		newstring[i] = (*f)(i, *s);
		i++;
	}
	return (newstring);
}
