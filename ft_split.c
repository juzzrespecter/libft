/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 21:16:24 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/12 16:06:25 by danrodri         ###   ########.fr       */
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
	unsigned int	size;
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

static char	**ft_build_tab(char const *s, char c, char **tab)
{
	int cont;
	int i;

	i = 0;
	cont = 0;
	while (cont < ft_tablen(s, c))
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

char		**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_tablen(s, c) + 1));
	if (!tab)
		return (NULL);
	if (!(tab = ft_build_tab(s, c, tab)))
		return (NULL);
	return (tab);
}
