/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:04:04 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/12 10:07:27 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printcomb(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	c[3];

	c[0] = '0' - 1;
	while (c[0]++ < '7')
	{
		c[1] = c[0];
		while (c[1]++ < '8')
		{
			c[2] = c[1];
			while (c[2]++ < '9')
			{
				ft_printcomb(c[0], c[1], c[2]);
			}
		}
	}
}
