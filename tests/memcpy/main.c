/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 16:13:50 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
   	char *src = argv[1];
	char *dst;

	dst = malloc(sizeof(char) * 16);
	*(dst + 15) = 0;
	if (argc == 2)
	{
		dst = ft_memcpy(dst, src, 15);
		printf("ft_ src = %s dst = %s\n", src, dst);
		dst = memset(dst, 48, 15);
		dst = memcpy(dst, src, 15);
		printf("mem src = %s dst = %s\n\n", src, dst);
	}
	return (0);
}
