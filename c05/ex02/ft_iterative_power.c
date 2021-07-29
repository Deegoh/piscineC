/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:53:44 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/21 21:47:50 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power < 0)
		return (0);
	if (nb == 1 || power == 0 || (power == 0 && nb == 0))
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
