# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpinto-m <tpinto-m@student.42lausanne      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 00:06:20 by tpinto-m          #+#    #+#              #
#    Updated: 2021/09/06 14:53:47 by deegoh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_strlen.c\
      ft_isalpha.c\
      ft_isdigit.c\
      ft_isalnum.c\
      ft_isascii.c\
      ft_isprint.c\
      ft_toupper.c\
      ft_tolower.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

so:
	$(CC) -fPIC $(FLAGS) -c $(SRC)
	gcc -shared -o libft.so $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf libft.so

re: fclean all

bonus:
	@echo "hello world!"
