/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 12:59:36 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/14 16:28:00 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_sizetab(char const *s, char c)
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
		if (s[i] == c)
			i++;
	}
	size++;
	return (size);
}

static int	ft_sizestr(char const *s, char c)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				size++;
				i++;
			}
			size++;
		}
		if (s[i] == c)
			i++;
	}
	return (size);
}

static char	**ft_tabbuilder(char const *s, char c, void **mtab, void *mstr)
{
	char	**tab;
	char	*str;
	int 	i;

	tab = (char **)mtab;
	str = (char *)mstr;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			*tab = str;
			tab++;
			while (s[i] != c && s[i])
			{
				*str = s[i];
				str++;
				i++;
			}
			*str = 0;
			str++;
		}
		i++;
	}
	*tab = NULL;
	return ((char **)mtab);
}

char	**ft_split(char const *s, char c)
{
	void	*mem;
	char	**tab;
	int		tabmem;
	int		strmem;

	tabmem = ft_sizetab(s, c);
	strmem = ft_sizestr(s, c);
	mem = malloc(sizeof(char **) * tabmem + strmem);
	if (mem == NULL)
		return (NULL);
	tab = ft_tabbuilder(s, c, mem, mem + sizeof(char **) * tabmem);
	return (tab);
}
