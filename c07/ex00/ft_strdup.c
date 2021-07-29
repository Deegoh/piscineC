/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:51:49 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/22 20:42:46 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(*res) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char		*s1 = "String";
	char		*s2 = strdup(s1);
	char		*s3 = ft_strdup(s1);

	free(s2);
	printf("result:%s\n", s2);
	printf("output:%s\n", s3);
}
*/
