/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 13:08:31 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/28 23:19:14 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	print_map(char	map[4096]);
int		ft_strlen(char	*str);
char	fm(char	pos1, char	pos2, char	pos3);
char	findmax(char	v1, char	v2);
int		get_lines(char	*tab);
int		get_cols(char	*tab);

void	addsquare(char	map[4096], int	square, int	i, int	cols)
{
	int	size;
	int	ni;

	size = square;
	i += (square - 3);
	while (0 < size)
	{
		ni = 0;
		while (ni < square)
		{
			if (map[i] == '.')
				map[i] = 'x';
			else
			{
				i--;
				continue ;
			}
			ni++;
			i--;
		}
		i -= cols - square;
		size--;
	}
}

int	offsetmap(char	map[4096])
{
	int	i;

	i = 0;
	while (map[i] != '\n')
		i++;
	return (i + 1);
}

int	convmap(char	map[4096], char	conv[4096], char	*str)
{
	int	i;
	int	space;

	(void)str;
	i = -1;
	space = 0;
	while (map[++i] != '\0')
	{
		if (map[i + offsetmap(map)] == '\n')
		{
			conv[i] = '\n';
		}
		if (map[i + offsetmap(map)] == '.')
		{
			conv[i] = '1';
			space++;
		}
		if (map[i + offsetmap(map)] == 'o')
			conv[i] = '0';
	}
	if (conv[i] != '\0')
		conv[i] = '\0';
	if (space)
		return (0);
	return (1);
}

void	rmap(char	m[4096], char	c[4096], int	mi, int	mj)
{
	int	i;
	int	stocki;
	int	maxsqrt;

	i = -1;
	maxsqrt = 0;
	mj++;
	while (++i < (mi * mj))
	{

		if (i < (mj + 1) || !(i % mj) || c[i] == '0')
			continue ;
		if (c[i] == '\n')
		{
			c[i] = '\n';
			continue ;
		}
		c[i] = fm(c[i - mj - 1], c[i - mj], c[i - 1]) + 1;
		if (maxsqrt < c[i])
		{
			maxsqrt = findmax(maxsqrt, c[i]);
			stocki = i;
		}
	}
	addsquare(m, maxsqrt - '0', stocki, mj);
}
