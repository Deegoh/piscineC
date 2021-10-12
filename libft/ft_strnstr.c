/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:04:08 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/10/12 17:58:22 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t needlelen;


	i = 0;
	j = 0;
	needlelen = ft_strlen(needle);
	if (len == 0 || needlelen == 0)
		return (haystack);
	while (i < len)
	{
		if (haystack[i] == needle[j])
		{
			if (j == needlelen - 1)
				return (&haystack[i - j]);
			j++;
		}
		i++;
	}
	return (NULL);
}
