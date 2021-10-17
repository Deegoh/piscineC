/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:56:29 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/10/15 15:00:32 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		split;
	int		j;

	if (!s || !c)
		return (NULL);
	i = 0;
	split = 1;
	while (s[i++])
	{
		if (s[i] == c)
			split++;
	}
	res = malloc(split + 1);
	if (!res)
		return NULL;
	j = 0;
	i = 0;
	while (j < split && s[i])
	{
		if (s[i] == c)
		{
			i++;
			j++;
			break;
		}
		res[j] = s[i++];
	}
	res[split] = NULL;
	return (res);
}
