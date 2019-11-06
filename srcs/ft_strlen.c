/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:14:38 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/04 19:16:56 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
