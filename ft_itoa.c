/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:28:49 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/10 20:55:15 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putnbr_chungo(int n, int size)
{
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 9)
	{
		size++;
		n = n / 10;
	}
	size++;
	return (size);
}

char	ft_get_number(int n, int i)
{
	int div;

	div = 1;
	while (i - 1 > 0)
	{
		div *= 10;
		i--;
	}
	n = n / div;
	return ((n % 10) + '0');
}

void	ft_write_str(char *str, int n, int size)
{
	if (n < 0)
	{
		*str = '-';
		str++;
		size--;
		n *= -1;
	}
	while (size)
	{
		*str = ft_get_number(n, size);
		size--;
		str++;
	}
	*str = 0;
}

char	*ft_itoa(int n)
{
	int 	size;
	char 	*str;
	
	size = 0;
	size = ft_putnbr_chungo(n, size);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_write_str(str, n, size);
	return (str);
}
