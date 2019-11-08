/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:15:49 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/08 18:24:31 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "../../srcs/libft.h"

int	main(int argc, char **argv)
{
	char *path = argv[1];
	char *str = argv[2];
	int fd;

	if (argc == 3)
	{
		fd = open(path, O_WRONLY);
		if (fd < 1)
		{
			printf("Error al abrir archivo.\n");
			return (0);
		}
		while (*str)
		{
			ft_putchar_fd(*str, fd);
			str++;
		}
		ft_putchar_fd('\n', fd);
		close(fd);
	}
	return (0);
}