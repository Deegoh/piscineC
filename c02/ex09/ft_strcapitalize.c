/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:58:26 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/16 10:29:28 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_letter_is_numeric(char	c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

int	ft_letter_is_uppercase(char	c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}

int	ft_letter_is_lowercase(char	c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

int	ft_letter_is_alphanum(int	a, int	b, int	c)
{
	if (a || b || c )
		return (1);
	return (0);
}

char	*ft_strcapitalize(char	*str)
{
	int	isupper;
	int	islower;
	int	isnum;
	int	isalphanum;
	int	lastletter;

	while (*str != '\0')
	{
		isupper = ft_letter_is_uppercase(*str);
		islower = ft_letter_is_lowercase(*str);
		isnum = ft_letter_is_numeric(*str);
		isalphanum = ft_letter_is_alphanum(isupper, islower, isnum);
		if (lastletter && isalphanum && islower)
			*str = *str - 32;
		if (!lastletter && isalphanum && isupper)
			*str = *str + 32;
		lastletter = !isalphanum; 
		str++;
	}
	return (str);
}

