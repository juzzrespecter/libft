/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:55:19 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 13:13:30 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_get_size(char const *s, char c)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			size++;
		i++;
	}
	size++;
	return (size);
}

static char	*ft_alloc_string(char const *s, char c, int i)
{
	unsigned int 	size;
	char			*str;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	return (str);
}

static char	*ft_write_string(char const *s, char *str, char c, int i)
{
	int j;

	j = 0;
	while (s[i] != c && s[i])
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int cont;
	int size;
	char *str;
	char **tab;
	
	i = 0;
	cont = 0;
	size = ft_get_size(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (tab == NULL)
		return (NULL);
	while (cont < size)
	{
		if (!(str = ft_alloc_string(s, c, i)))
				return (NULL);
		tab[cont] = ft_write_string(s, str, c, i);
		while (s[i] != c && s[i])
			i++;
		i++;
		cont++;
	}
	tab[cont] = NULL;
	return (tab);
}
