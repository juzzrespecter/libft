/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 17:19:36 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	char *s1;
	char *s2;

	if (argc == 2)
	{
		s1 = malloc(sizeof(char) * 15);
		s2 = malloc(sizeof(char) * 15);
		s1 = ft_memset(s1, atoi(argv[1]), 15);
		write(1, "ft_ : ", 6);
		write(1, s1, 15);
		write(1, "\n", 1);
		s2 = memset(s2, atoi(argv[1]), 15);
		write(1, "mem : ", 6);
		write(1, s2, 15);
		write(1, "\n\n", 2);
		free(s1);
		free(s2);
	}
	return (0);
}
