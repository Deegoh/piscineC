/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 22:05:07 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/25 10:44:11 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
int	main(void)
{
	int	*range;
	int	i = 0;
	int	min = -5;
	int	max = 10;
	int	size;

	size = ft_ultimate_range(&range, min, max);
	printf("size:%d\nrange: ", size);
	while (i < (max - min))
	{
		printf("%d ", range[i]);
		i++;
	}
}
*/
