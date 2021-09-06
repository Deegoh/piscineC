#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>	
# include <stdio.h>	
# include <unistd.h>	

int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
#endif