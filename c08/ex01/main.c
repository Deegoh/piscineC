/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 11:06:13 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/27 18:47:15 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void    ft_putstr(char *str)
{
    while (*str)write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
    return ((EVEN(nbr)) ? TRUE : FALSE);
    
}
int main(int argc,char **argv)
{
    (void)argv;
    if (ft_is_even(argc - 1) == TRUE)
        ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
    return (SUCCESS);
}
