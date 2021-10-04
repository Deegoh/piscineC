#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>	
# include <stdio.h>	
# include <unistd.h>	

size_t	ft_strlcpy(char	*dst, char	*src, size_t size);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strrchr(char *str, int c);
char	*ft_strchr(char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strlen(char *str);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_strlen(char *str);
#endif
