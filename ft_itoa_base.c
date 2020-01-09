/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 18:43:43 by danrodri          #+#    #+#             */
/*   Updated: 2020/01/09 19:47:06 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int ft_get_isize(int i, int bsize)
{
	int isize;

	isize = 0;
	while (i)
		{
			i /= bsize;
			isize++;
		}
	return (isize);
}

static char *ft_rev_a(char *a)
{
	int asize;
	int i;
	char aux;

	asize = ft_strlen(a);
	i = 0;
	while (i < asize / 2)
		{
			aux = a[i];
			a[i] = a[asize - (i + 1)];
			a[asize - (i + 1)] = aux;
			i++;
		}
	return (a);
}

static int ft_check_base(char *base)
{
	int count;

	count = 0;
	if (!base || ft_strlen(base) == 1)
		return (0);
	while (base[count])
		{
			if (ft_strchr(base + count + 1, base[count]))
				return (0);
			count++;
		}
	return (1);
}

char	*ft_itoa_base(int i, char *base)
{
	char *a;
	int count;
	int bsize;

	if (!ft_check_base(base))
		return (NULL);
	bsize = ft_strlen(base);
	if (!(a = malloc(sizeof(char) * (ft_get_isize(i, bsize) + 1))))
		return (NULL);
	count = 0;
	while (i)
		{
			a[count] = base[i % bsize];
			i /= bsize;
			count++;
		}
	a[count] = 0;
	ft_rev_a(a);
	return (a);
}
