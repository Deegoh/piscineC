/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:53:02 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/29 15:47:48 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
/*
unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{

}
*/
int	main(void)
{
	int		size = 15;
	char	buffer[size];
	int		res;

	res = strlcpy(buffer, "Hello", size);
	res = strlcpy(buffer, "World", size);
	printf("%d\n", res);
	printf("%s\n", buffer);
}
