/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/07 16:58:58 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	void *mem; 

	mem = malloc(sizeof(*mem) * 10);

	memset(mem, 'z', 10);
	write(1, "Func. bzero: ", 13);
	bzero(mem, 5);
	write(1, mem, 10);
	write(1, "\n", 1);

	memset(mem, 'z', 10);
	write(1, "Func. ft_bzero: ", 16);
	ft_bzero(mem, 5);
	write(1, mem, 10);
	write(1, "\n", 1);

	return (0);
}
