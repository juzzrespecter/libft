/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 15:51:29 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	char *dst;
	char *ptr;
   	char *src = argv[1];

	dst = malloc(sizeof(char) * 11);
	dst = memset(dst, 'e', 10);
	*(dst + 10) = 0;
	if (argc == 2)
	{
		ptr = ft_memccpy(dst, src, 97, 10);
		printf("src = %s \nft_ dst = %s, func. return = %s\n", src, dst, ptr);
		dst = memset(dst, 'e', 10);
		ptr = memccpy(dst, src, 97, 10);
		printf("mem dst = %s, func. return = %s\n\n", dst, ptr);
	}
	return (0);
}
