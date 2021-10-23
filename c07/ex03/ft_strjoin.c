/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 12:50:30 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/27 12:04:18 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char	*dest,	char	*src)
{
	int	i;
	int	lendest;

	i = 0;
	lendest = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[lendest] = src[i];
		lendest++;
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int	size,	char	**strs,	char	*sep)
{
	int		i;
	int		lentab;
	char	*str;

	i = -1;
	lentab = 0;
	if (size == 0)
	{
		str = malloc(sizeof(*str));
		return (str);
	}
	while (++i < size)
		lentab += ft_strlen(strs[i]);
	str = malloc(sizeof(*str) * lentab + ft_strlen(sep) * (size - 1) + 1);
	if (!str)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, *strs);
		if (i < size - 1)
			ft_strcat(str, sep);
		strs++;
	}
	return (str);
}
/*
int	main(void)
{
	char	*tab[4];

	tab[0] = "Hello";	
	tab[1] = "tout";	
	tab[2] = "le";	
	tab[3] = "monde";	
	printf("%s", ft_strjoin(4, tab, " "));
}
*/
