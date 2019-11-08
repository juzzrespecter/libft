/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 15:59:16 by danrodri         ###   ########.fr       */
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
	char *ptr;

	if (argc == 2)
	{
		ptr = ft_memchr(src, 97, strlen(src));
		printf("src = %s \nft_ func. return = %s\n", src, ptr);
		ptr = memchr( src, 97, strlen(src));
		printf("mem func. return = %s\n\n", ptr);
	}
	return (0);
}
