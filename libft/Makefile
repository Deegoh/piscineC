# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 18:54:17 by tpinto-m          #+#    #+#              #
#    Updated: 2021/10/11 22:54:56 by deegoh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_strnstr.c\
	  ft_strlcat.c\
      ft_strlcpy.c\
      ft_strncmp.c\
	  ft_strlen.c\
      ft_isalpha.c\
      ft_isdigit.c\
      ft_isalnum.c\
      ft_isascii.c\
      ft_isprint.c\
      ft_toupper.c\
      ft_tolower.c\
      ft_strchr.c\
      ft_strrchr.c\
	  ft_memccpy.c\
	  ft_memmove.c\
	  ft_memcpy.c\
	  ft_bzero.c\
	  ft_memset.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf libft.so

re: fclean all

so:
	rm -rf libft.so
	$(CC) -fPIC $(FLAGS) -c $(SRC)
	$(CC) -shared -o libft.so $(OBJ)
bonus:
	@echo "hello world!"
