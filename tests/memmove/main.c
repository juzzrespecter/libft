/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 17:01:09 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
   	char *s = argv[1];
	char *s1;
	char *s2;
	char *dst;

	s1 = malloc(sizeof(char) * 20);
	memcpy(s1, s, 15);
	s2 = malloc(sizeof(char) * 20);
	memcpy(s2, s, 15);
	dst = s1 + 5;
	if (argc == 2)
	{
		dst = ft_memmove(dst, s1, 15);
		write(1, dst, 15);
		write(1, "\n", 1);
		dst = s2 + 5;
		dst = memmove(dst, s2, 15);
		write(1, dst, 15);
		write(1, "\n\n", 2);
	}
	free(s1);
	free(s2);
	return (0);
}
