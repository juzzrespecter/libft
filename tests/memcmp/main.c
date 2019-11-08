/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 16:34:32 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	char *str;
	char *dyt;

	str = argv[1];
	dyt = argv[2];
	if (argc == 3)
	{
		printf("s1 = %s, s2 = %s\n", str, dyt);
		printf("ft_ %d\n", ft_memcmp(str, dyt, 5));
		printf("mem %d\n\n", memcmp(str, dyt, 5));
	}
	return (0);
}
