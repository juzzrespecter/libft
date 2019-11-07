/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/07 17:51:50 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	int c;

	if (argc == 2)
	{
		if (ft_isalnum(atoi(argv[1])))
			write(1, "Es alfanumerico.\n", 17);
		if (ft_isalpha(atoi(argv[1])))
			write(1, "Es alfabetico.\n", 15);
		if (ft_isascii(atoi(argv[1])))
			write(1, "Es caracter ascii.\n", 19);
		if (ft_isdigit(atoi(argv[1])))
			write(1, "Es un digito.\n", 14);
		if (ft_isprint(atoi(argv[1])))
			write(1, "Es imprimible.\n", 15);
	}
	else if (argc == 3)
	{
		c = isascii(atoi(argv[1])) + 50;
		write(1, &c, sizeof(c));
		write(1, "\n", 1);
	}
	else write(1, "Input error.\n", 13);
	c = 0;
	return (0);
}
