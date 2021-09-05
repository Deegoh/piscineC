# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/24 15:44:52 by tpinto-m          #+#    #+#              #
#    Updated: 2021/07/27 14:26:15 by tpinto-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGNAME=rush-02
CCFLAGS=-Wall -Wextra -Werror

compile:
	cc $(CCFLAGS) ft_putstr.c -c
	cc $(CCFLAGS) ft_putnbr.c -c
	cc $(CCFLAGS) ft_get_argument.c -c
	cc $(CCFLAGS) ft_is_space.c -c
	cc $(CCFLAGS) ft_parsing.c -c
	cc $(CCFLAGS) ft_strlen.c -c
	cc $(CCFLAGS) ft_search.c -c
	cc $(CCFLAGS) main.c -c
	cc $(CCFLAGS) *.o -o $(PROGNAME)
fclean:
	rm -f $(PROGNAME)
	rm -f *.o
	rm -f a.out
