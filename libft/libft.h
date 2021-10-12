/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:10:28 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/10/12 18:01:38 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>	
# include <stdio.h>	
# include <unistd.h>	

int		ft_atoi(char *str);
char    *ft_strnstr(char *haystack, char *needle, size_t len);
size_t	ft_strlcat(char	*dst, char	*src, size_t size);
size_t	ft_strlcpy(char	*dst, char	*src, size_t size);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strrchr(char *str, int c);
char	*ft_strchr(char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_strlen(char *str);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *str, int c, size_t n);
#endif
