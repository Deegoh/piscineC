/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:50:00 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/10/12 15:50:04 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			ft_memmove(dst, src, i + 1);
			return ((void *)(dst + i + 1));
		}
	}
	ft_memmove(dst, src, n);
	return (NULL);
}
