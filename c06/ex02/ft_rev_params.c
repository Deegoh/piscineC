/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:42:04 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/22 16:55:33 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int	ac, char	**av)
{
	int	i;

	i = ac - 1;
	(void)av;
	while (0 < i)
	{
		ft_putstr(av[i]);
		ft_putstr("\n");
		i--;
	}
	return (0);
}
