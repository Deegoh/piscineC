/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:20:27 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/10/18 15:49:43 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lennbr(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (9 < n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = lennbr(n);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		res[0] = '-';
		i = 1;
		n *= -1;
	}
	res[len] = '\0';
	while (i < len--)
	{
		res[len] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}
