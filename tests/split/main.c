/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 18:55:33 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	char *s = argv[1];
	char c = *argv[2];
	char **tabla;

	if (argc == 3)
	{
		tabla = ft_split(s, c);
		while (tabla)
		{
			printf("%s\n", *tabla);
			tabla++;
		}
	}
	printf(":(\n");
	return (0);
}
