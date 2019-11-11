/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:59:51 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/11 13:31:19 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr_fd(char *s, int fd)
{
	if (s)
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
}