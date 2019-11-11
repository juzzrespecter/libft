/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 19:55:19 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 19:33:45 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_tablen(char const *s, char c)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			size++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
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
	char	**tab;
	int		cont;
	int		size;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	cont = 0;
	size = ft_tablen(s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	while (cont < size)
	{
		if (s[i] != c && s[i])
		{
			if (!(tab[cont] = ft_alloc_string(s, c, i)))
				return (NULL);
			ft_write_string(s, tab[cont], c, i);
			cont++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	tab[cont] = NULL;
	return (tab);
}
