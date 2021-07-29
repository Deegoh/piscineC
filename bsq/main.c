/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:59:50 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/28 23:24:25 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		read_file(char	parameters[], char	*map);
int		convmap(char	map[4096], char	conv[4096], char	*str);
int		get_lines(char	*tab);
int		get_cols(char	*tab);
void	rmap(char	m[4096], char	c[4096], int	mi,	int	mj);
void	print_map(char	map[4096]);

void	tinymap(char	map[4096])
{
	if (map[5] == '.' && map[6] != '\0')
		map[5] = 'x';
	else
	{
		write(1, "Map Error\n", 11);
		return ;
	}
}

int	main(int	ac, char	**av)
{
	int		i;
	char	map[4096];
	char	conv[4096];
	int		lines;
	int		cols;

	if (ac < 1)
		return (1);
	i = 1;
	while (av[i] != (void *)0)
	{
		if (read_file(av[i], map))
		{
			write(1, "Map Error\n", 11);
			return (1);
		}
		lines = get_lines(map);
		cols = get_cols(map);
		convmap(map, conv, "test");
		rmap(map, conv, lines - 1, cols);
		tinymap(map);
		print_map(map);
		i++;
	}
	return (0);
}
