/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:45:30 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/22 13:17:48 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	idest;
	unsigned int	isrc;

	idest = 0;
	isrc = 0;
	while (dest[idest] != '\0')
	{
		idest++;
	}
	while (src[isrc] != '\0' && isrc < nb)
	{
		dest[idest] = src[isrc];
		idest++;
		isrc++;
	}
	dest[idest] = '\0';
	return (dest);
}
