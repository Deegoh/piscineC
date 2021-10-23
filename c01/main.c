/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:04:46 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/13 18:38:04 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_ft(int	*nbr);
void	ft_ultimate_ft(int	*********nbr);
void	ft_swap(int	*a, int	*b);
void	ft_div_mod(int	a, int	b, int *div, int *mod);
void	ft_ultimate_div_mod(int	*a, int	*b);
void	ft_putstr(char	*str);
int		ft_strlen(char	*str);
void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	/*int	a;
	int	*ptr1;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;

	a = 0;
	ptr1 = &a;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;*/
	int	a;

	a =	ft_strlen("Hello");
	printf("%d", a);
}
