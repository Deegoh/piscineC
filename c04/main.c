/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 22:03:54 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/20 19:18:53 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char	*str);
void	ft_putstr(char	*str);
void	ft_putnbr(int	nb);
int		ft_atoi(char	*str);

int	main(void)
{
	printf("ex00\n");
	printf("%d$\n", ft_strlen("123"));
	printf("ex01\n");
	ft_putstr("123$\n");
	printf("ex02\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(10);
	printf("\n");
	ft_putnbr(110);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-2147483647);
	printf("\n");
	printf("ex03\n");
	printf("%d$\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d$\n", atoi(" ---+--+1234ab567"));
}
