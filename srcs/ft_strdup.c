/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:54:29 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/06 17:37:33 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char		*copy;
	const char	*ptrs1;
	char		*ptrcopy;
	int			size;

	size = 0;
	ptrs1 = s1;
	while (s1)
	{
		size++;
		s1++;
	}
	copy = malloc(sizeof(char) * (size + 1));
	s1 = ptrs1;
	ptrcopy = copy;
	while (s1)
	{
		*copy = *s1;
		copy++;
		s1++;
	}
	*copy = 0;
	return (ptrcopy);
}
