/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 21:51:28 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/28 17:27:56 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	fm(char	pos1, char	 pos2, char	pos3)
{
	if (pos1 < pos2)
	{
		if (pos1 < pos3)
			return (pos1);
		else
			return (pos3);
	}
	else
	{
		if (pos2 < pos3)
			return (pos2);
		else
			return (pos3);
	}
}

char	findmax(char	v1, char	v2)
{
	if (v1 < v2)
		return (v2);
	else
		return (v1);
}

int	get_lines(char	*tab)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

int	get_cols(char	*tab)
{
	int	i;
	int	count;

	i = 0;
	while (tab[i] != '\n')
		i++;
	i++;
	count = 0;
	while (tab[i] != '\n')
	{
		i++;
		count++;
	}
	return (count);
}
