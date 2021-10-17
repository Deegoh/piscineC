/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:10:28 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/10/15 11:59:51 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>	
# include <stdio.h>	
# include <unistd.h>	
# include <stdlib.h>

char    **ft_split(char const *s, char c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_strjoin(char const  *s1, char const *s2);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
int		ft_atoi(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcat(char	*dst, const char	*src, size_t size);
size_t	ft_strlcpy(char *dst, const char	*src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_strlen(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
int		ft_isspace(int c);
#endif
