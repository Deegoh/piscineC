/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 20:07:27 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/22 22:04:41 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	min;
	int	max;
	int	i;

	i = 0;
	min = -5;
	max = 5;
	tab = ft_range(min, max);
	while (i < (max-min))
	{	
		printf("%d\n", tab[i]);
		i++;
	}
}
*/
