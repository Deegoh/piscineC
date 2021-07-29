/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:47:46 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/22 15:35:14 by tpinto-m         ###   ########.fr       */
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

int	main(int	ac,	char	**av)
{
	int	i;

	(void)av;
	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			ft_putstr(av[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
