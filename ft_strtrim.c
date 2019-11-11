/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:39:18 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/10 22:36:57 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_check_set_matches(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_trim_left(char const *s1, char const *set)
{
	int start;
	int i;

	i = 0;
	start = 0;
	while (ft_check_set_matches(s1[i], set))
	{
		i++;
		start++;
	}
	return (start);
}	

static int	ft_trim_right(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (s1[i + 1])
		i++;
	while (ft_check_set_matches(s1[i], set) && i)
		i--;
	return (i);
}

static int	ft_get_size_trimmed(int start, int end)
{
	int	size;

	size = 0;
	while (start <= end)
	{
		start++;
		size++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*starttrm;
	char	*strtrimmed;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = ft_trim_left(s1, set);
	end = ft_trim_right(s1, set);
	size = ft_get_size_trimmed(start, end);
	strtrimmed = malloc(sizeof(char) * (size + 1));
	if (strtrimmed == NULL)
		return (NULL);
	starttrm = strtrimmed;
	while (start <= end)
	{
		*strtrimmed = s1[start];
		start++;
		strtrimmed++;
	}
	*strtrimmed = 0;
	return (starttrm);
}
