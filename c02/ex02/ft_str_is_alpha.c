/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:52:24 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/15 18:12:00 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if ((src[i] >= 'a' && src[i] <= 'z'))
		{
			i++;
			continue ;
		}
		else if (src[i] >= 'A' && src[i] <= 'Z')
		{
			i++;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
