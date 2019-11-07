/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:38:01 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/07 15:20:36 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_get_size(char const *s, char c)
{
	int size;
	int i;

	i = 0;
	size = 1;
	while (s[i])
	{
		if (s[i] == c)
			size++;
		i++;
	}
	return (size);
}

int		ft_get_array_size(char const *s, char c, int i)
{
	int size;

	size = 0;
	while (s[i] != c && s[i])
	{
		i++;
		size++;
	}
	return (size);
}

void	ft_build_array(char const *s, char c, char *tabla, int size, int i)
{
	tabla = malloc(sizeof(char) * (size + 1));
	while (*s != c && s[i])
	{
		*tabla = s[i];
		tabla++;
		i++;
	}
	*tabla = 0;
}		

int		ft_move_array(char const *s, char c, int i)
{
	while (s[i] != c && *s)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char 	**tabla;
	int		size;
	int		i;

	size = ft_get_size(s, c);
	tabla = malloc(sizeof(char *) * (size + 1));
	if (tabla == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		size = ft_get_array_size(s, c, i);
		ft_build_array(s, c, *tabla, size, i);
		i += ft_move_array(s, c, i);
		tabla++;
	}
	tabla = NULL;
	return (tabla);
}
