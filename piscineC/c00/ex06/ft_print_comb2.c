/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 09:30:16 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/12 09:18:54 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putcomb(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	c[4];

	c[0] = '0' - 1;
	while (c[0]++ < '9')
	{
		c[1] = '0' - 1;
		while (c[1]++ < '9')
		{
			c[2] = '0' - 1;
			while (c[2]++ < '9')
			{
				c[3] = '0' - 1;
				while (c[3]++ < '9')
				{
					if (c[0] * 10 + c[1] >= c[2] * 10 + c[3])
						continue ;
					ft_putcomb(c[0], c[1], c[2], c[3]);
				}
			}
		}
	}
}