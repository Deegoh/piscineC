/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:56:17 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/29 19:25:38 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	i;
	int	maxi;
	int	tmp;

	i = 0;
	maxi = size;
	while (i < size / 2)
	{
		maxi--;
		tmp = tab[i];
		tab[i] = tab[maxi];
		tab[maxi] = tmp;
		i++;
	}	
}
/*
int	main()
{
	int	tab[] = {1,2,3,4,5,6};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 6);
	while (i < 6)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/
