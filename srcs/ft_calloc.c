/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:48:34 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/05 15:54:22 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char *mem;
	char *ptr;
	int i;

	mem = malloc(count * size);
	i = 0;
	ptr = mem;
	while (i < count)
	{
		*mem = 0;
		mem++;
		i++;
	}
	return ptr;
}
