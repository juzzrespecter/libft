/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:32:16 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/07 15:34:15 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_lenstr(char *s)
{
	int size;

	size = 0;
	while (*s)
	{
		size++;
		s++;;
	}
	return (size);
}

static char	*ft_cpystr(char *src, char *dst)
{
	char * rtrndst;

	rtrndst = dst;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (rtrndst);
}

char		*ft_strmapi(char *s, void (*f)(unsigned int, char))
{
	char			*snew;
	char			*rtrnsnew;
	char			(*funcion)(unsigned int, char);
	unsigned int	i;

	snew = malloc(sizeof(char) * (ft_lenstr(s) + 1));
	if (snew == NULL)
		return (NULL);
	rtrnsnew = snew;
	ft_cpystr(s, snew);
	funcion = (char (*)(unsigned int, char))f;
	i = 0;
	while (*snew)
	{
		*snew = (*funcion)(i, *s);
		snew++;
		i++;
	}
	*snew = 0;
	return (rtrnsnew);
}
