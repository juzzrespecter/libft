/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:32:16 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/06 18:21:28 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "funciones.h"

char	*ft_strmapi(char *s, void (*f)(unsigned int, char))
{
	char *news;

	news = malloc(sizeof(char) * (ft_strlen(s) + 1));
	ft_strlcpy(s, news, ft_strlen(s) + 1);
	while (*news)
	{
		f(ft_strlen(s), *s);
		news++;
	}
	return (news);
}	
