/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 13:38:21 by gudias            #+#    #+#             */
/*   Updated: 2021/07/25 21:20:16 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_is_space(char c);

void	store_numbers(char *str, int index, char *key)
{	
	int		i;

	i = 0;
	while (str[index + i] >= '0' && str[index + i] <= '9')
	{
		key[i] = str[index + i];
		i++;
	}
}

char	*ft_get_argument(char *str)
{
	int		i;
	int		start;
	char	*key;

	i = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			return (NULL);
		i++;
	}
	start = i;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	key = malloc(sizeof (char) * (i - start));
	if (!key)
		return (NULL);
	store_numbers(str, start, key);
	return (key);
}
