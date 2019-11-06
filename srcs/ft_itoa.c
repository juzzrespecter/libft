/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:28:49 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/06 12:10:00 by danrodri         ###   ########.fr       */
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
	if (n < 9)
		size = ft_putnbr_chungo(n / 10, size);
	return (size++);
}

void	*ft_write_str(char *str, int n, int size)
{
	if (n < 0)
	{
		*str = '-';
		str++;
		n *= -1;
	}
	*str = 0;
	if (n > 9)
		ft_write_str(str++, n / 10, size--);
	*str = (n % 10);
}

char	*ft_itoa(int n)
{
	int 	size;
	char 	*str;
	int 	i;
	
	i = 0;
	size = 0;
	size = ft_putnbr_chungo(n, size);
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_write_str(str, n, size);
	return (str);
}
