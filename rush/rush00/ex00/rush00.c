/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:14:05 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/10 17:44:01 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int	condition, char	chartrue, char	charfalse)
{
	if (condition)
	{
		ft_putchar(chartrue);
	}
	else
	{
		ft_putchar(charfalse);
	}
}

void	rush00(int	x, int	y)
{
	int	line;
	int	column;

	line = 0;
	column = 0;
	while (column++ < y)
	{
		while (line++ < x)
		{
			if (column == 1 || column == y)
			{
				ft_printline(line == 1 || line == x, 'o', '-');
			}
			else
			{
				ft_printline(line == 1 || line == x, '|', ' ');
			}
		}
		line = 0;
		ft_putchar('\n');
	}
}
