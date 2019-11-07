/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:26:22 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/07 17:14:53 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	void	*mem = NULL;
	void	*ftmem = NULL;

	write(1, "Test calloc: \n", 14);
	mem = calloc(10, 1);
	if (mem)
		write(1, "Recibe direccion de memoria.\n", 29);
	write(1, mem, 10);
	write(1, "\n", 1);
	write(1, "Test ft_calloc: \n", 17);
	ftmem = ft_calloc(10, 1);
	if (ftmem)
		write(1, "Recibe direccion de memoria.\n", 29);
	write(1, ftmem, 10);
	write(1, "\n", 1);
	return (0);
}
