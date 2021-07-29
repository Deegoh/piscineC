/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:30:28 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/29 15:01:18 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char	*str)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(dup) * ft_str_len(str) + 1);
	if (!dup)
		return (NULL);
	while(str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct	s_stock_str *ft_strs_to_tab(int	ac, char	**av)
{
	int	i;
	struct s_stock_str	*arr;

	i = 0;
	arr = malloc(sizeof(arr) * ac + 1);
	if(!arr)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_str_len(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
	}
	arr[i] = NULL;
	return (arr);
}
