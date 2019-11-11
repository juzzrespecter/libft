/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:32:16 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 20:58:15 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_lenstr(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*nstr;
	unsigned int	i;

	if (!s)
		return (NULL);
	nstr = malloc(sizeof(char) * (ft_lenstr(s) + 1));
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < ft_lenstr(s))
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	nstr[i] = 0;
	return (nstr);
}
