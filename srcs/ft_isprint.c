/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:38:33 by danrodri          #+#    #+#             */
/*   Updated: 2019/11/04 19:44:31 by danrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (c);
	return (0);
}
