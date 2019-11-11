/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:28:49 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 20:52:38 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putnbr_chungo(int n)
{
	int size;

	size = 0;
	if (n == -2147483648)
	{
		n = 147483648;
		size += 2;
	}
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
	int i;

	i = 0;
	if (n == -2147483648)
	{
		str[i] = '-';
		str[i + 1] = '2';
		n = 147483648;
		i += 2;
	}
	if (n < 0)
	{
		str[i] = '-';
		i++;
		n *= -1;
	}
	while (i < size)
	{
		str[i] = ft_get_number(n, size - i);
		i++;
	}
	str[i] = 0;
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_putnbr_chungo(n);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_write_str(str, n, size);
	return (str);
}
