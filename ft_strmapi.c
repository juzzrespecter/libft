/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:32:16 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 13:40:11 by danrodri         ###   ########.fr       */
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
	char	 		*nstr;
	unsigned int	i;

	nstr = malloc(sizeof(char) * (ft_lenstr(s) + 1));
	if (nstr == NULL)
		return (NULL);
	ft_cpystr(s, nstr);
	i = 0;
	while (nstr[i])
	{
		nstr[i] = (*f)(i, *nstr);
		i++;
	}
	return (nstr);
}
