/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:06:30 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/07 15:28:48 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t 	i;
	char	*subs;

	i = 0;
	subs = malloc(sizeof(char) * (len + 1));
	if (subs == NULL)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	return (subs);
}	
