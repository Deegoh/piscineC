/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:26:26 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/29 17:19:36 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int	nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += '0';
		write(1, &nb, 1);
	}
}

void	ft_print_combn(int	n)
{
	int	i;

	i = 0;

	if (n < 0 || n > 10)
		return ;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, ", ", 2);
		i++;
	}
}

int	main(void)
{
	ft_print_combn(1);
}
