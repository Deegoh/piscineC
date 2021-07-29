/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:59:47 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/21 21:56:15 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int	nb);
int	ft_recursive_factorial(int	nb);
int	ft_iterative_power(int	nb, int	power);
int	ft_recursive_power(int	nb, int	power);
int	ft_fibonacci(int	index);
int	ft_sqrt(int	nb);
int	ft_is_prime(int	nb);

int	main(void)
{
	printf("Ex00\n");
	printf("%d\n", ft_iterative_factorial(-47));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(4));
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(7));
	printf("%d\n", ft_iterative_factorial(8));
	printf("%d\n", ft_iterative_factorial(9));
	printf("%d\n", ft_iterative_factorial(11));
	printf("---------------\n");
	printf("Ex01\n");
	printf("%d\n", ft_recursive_factorial(-100));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(1));
	printf("%d\n", ft_recursive_factorial(2));
	printf("---------------\n");
	printf("Ex02\n");
	printf("%d\n", ft_iterative_power(3393, -2551));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(161, 0));
	printf("%d\n", ft_iterative_power(1912, 1));
	printf("%d\n", ft_iterative_power(0, 3));
	printf("%d\n", ft_iterative_power(1, 4));
	printf("%d\n", ft_iterative_power(3, 5));
	printf("%d\n", ft_iterative_power(5, 6));
	printf("%d\n", ft_iterative_power(6, 7));
	printf("%d\n", ft_iterative_power(8, 8));
	printf("%d\n", ft_iterative_power(-8, 9));
	printf("---------------\n");
	printf("Ex03\n");
	printf("%d\n", ft_recursive_power(-1453, -4024));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-960, 0));
	printf("%d\n", ft_recursive_power(-1817, 1));
	printf("%d\n", ft_recursive_power(4, 2));
	printf("%d\n", ft_recursive_power(5, 3));
	printf("%d\n", ft_recursive_power(6, 4));
	printf("%d\n", ft_recursive_power(7, 5));
	printf("%d\n", ft_recursive_power(-8, 8));
	printf("%d\n", ft_recursive_power(-5, 9));
	printf("%d\n", ft_recursive_power(-2, 10));
	printf("%d\n", ft_recursive_power(2, 2));
	printf("---------------\n");
	printf("Ex04\n");
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(16));
	printf("%d\n", ft_fibonacci(-1));
	printf("---------------\n");
	printf("Ex05\n");
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(40000));
	printf("%d\n", ft_sqrt(251001));
	printf("%d\n", ft_sqrt(998001));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(2147395600));
	printf("---------------\n");
	printf("Ex06\n");
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(2147483647));
}
