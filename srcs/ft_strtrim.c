/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:39:18 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/05 18:37:54 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_check_set_matches(char c, char const set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_trim_left(char const *s1, char const *set)
{
	while (ft_check_set_matches(*s1, set));
		s1++;
	return (s1);
}	

static char	*ft_trim_right(char const *s1, char const *set)
{
	char *starts1;

	starts1 = s1;
	while (*s1)
		s1++;
	s1--;
	while (ft_check_set_matches(*s1, set) && s1 != starts1)
		s1--;
	return (s1);
}

static int	ft_get_size_trimmed(char *start, char *end)
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
	int size;
	char *starttrm;
	char *strtrimmed;
	char *start;
	char *end;

	start = ft_trim_left(s1, set);
	end = ft_trim_right(s1, set);
	size = ft_get_size_trimmed(start, end, s1);
	strtrimmed = malloc(sizeof(char) * (size + 1));
	if (strtrimmed == NULL)
		return (NULL);
	starttrm = strtrimmed;
	while (start <= end)
	{
		*strtrimmed = *start;
		start++;
		strtrimmed++;
	}
	*strtrimmed = 0;
	return (starttrm);
}
