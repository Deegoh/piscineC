/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 21:13:11 by gudias            #+#    #+#             */
/*   Updated: 2021/07/25 21:21:57 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int	ft_strlen(char	*str);

char	*get_result(int index, char *tab)
{
	int		i;
	char	*output;

	i = index;
	while (tab[i] != '\n')
	{
		i++;
	}
	output = (char *)malloc(sizeof (char) * (i - index));
	if (!output)
		return (NULL);
	i = 0;
	while (tab[index] != '\n')
	{
		output[i] = tab[index];
		index++;
		i++;
	}
	return (output);
}

char	*ft_search(char *str, char *tab)
{
	int		i;
	int		j;
	int		len;

	len = ft_strlen(str);
	i = 0;
	while (tab[i] != '\0')
	{	
		j = 0;
		while (j < len && tab[i] == str[j])
		{
			i++;
			j++;
		}	
		if (j == len && tab[i] == ':')
		{	
			return (get_result(i + 1, tab));
		}
		while (tab[i] != '\n')
			i++;
		i++;
	}
	return (NULL);
}
