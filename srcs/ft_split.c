/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:38:01 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/05 20:28:33 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_get_size(char const *s, char c)
{
	int size;

	size = 1;
	while (*s)
	{
		if (*s == c)
			size++;
		s++;
	}
	return (size);
}

int		ft_get_array_size(char *s, char c)
{
	int size;

	size = 0;
	while (*s != c && *s)
	{
		s++;
		size++;
	}
	return (size);
}

void	ft_build_array(char *s, char c, char *tabla,  int size)
{
	tabla = malloc(sizeof(char) * (size + 1));
	while (*s != c && *s)
	{
		*tabla = *s;
		tabla++;
		s++;
	}
	*tabla = 0;
}		

char	*ft_move_array(char const *s, char c)
{
	while (*s != c && *s)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char **tabla;
	int size;

	size = ft_get_size(s, c);
	tabla = malloc(sizeof(char *) * (size + 1));
	if (tabla == NULL)
		return (NULL);
	while (*s)
	{
		size = ft_get_array_size(s, c);
		ft_build_array(s, c, *tabla, size);
		s = ft_move_array(s, c);
		tabla++;
	}
	tabla = NULL;
	return (tabla);
}
