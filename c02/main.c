/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:57:53 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/15 22:26:32 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src);
char	*ft_strncpy(char	*dest, char	*src, unsigned int	n);
int		ft_str_is_alpha(char	*src);
int		ft_str_is_numeric(char	*src);
int		ft_str_is_lowercase(char	*src);
int		ft_str_is_uppercase(char	*src);
int		ft_str_is_printable(char	*src);
char	ft_strupcase(char	*str);
char	ft_strlowcase(char	*str);
char	ft_strcapitalize(char	*str);

int	main(void)
{
	//ex00
	printf("----------------------\n");
	printf("EX00\n");
	char	dest1[] = "Hello";
	char	src1[] = "ta";

	printf("%s\n", dest1);
	ft_strcpy(dest1, src1);
	printf("%s\n", dest1);
	
	//ex01
	printf("----------------------\n");
	printf("EX01\n");
	char	dest2[] = "................";
	char	src2[] = "Hello";

	printf("%s\n", dest2);
	ft_strncpy(dest2, src2, 6);
	printf("%s\n", dest2);
	
	//ex02
	printf("----------------------\n");
	printf("EX02\n");
	int alpha;

	alpha = ft_str_is_alpha("azAZ");
	printf("%d\n", alpha);
	alpha = ft_str_is_alpha("");
	printf("%d\n", alpha);
	alpha = ft_str_is_alpha("azAZ12345");
	printf("%d\n", alpha);
	
	//ex03
	printf("----------------------\n");
	printf("EX03\n");
	int	numeric;

	numeric = ft_str_is_numeric("0123456789");
	printf("%d\n", numeric);
	numeric = ft_str_is_numeric("/");
	printf("%d\n", numeric);
	numeric = ft_str_is_numeric(":");
	printf("%d\n", numeric);
	numeric = ft_str_is_numeric("");
	printf("%d\n", numeric);
	
	//ex04
	printf("----------------------\n");
	printf("EX04\n");
	int lower;	

	lower = ft_str_is_lowercase("az");
	printf("%d\n", lower);
	lower = ft_str_is_lowercase("");
	printf("%d\n", lower);
	lower = ft_str_is_lowercase("`");
	printf("%d\n", lower);
	lower = ft_str_is_lowercase("{");
	printf("%d\n", lower);
	
	//ex05
	printf("----------------------\n");
	printf("EX05\n");
	int upper;	

	upper = ft_str_is_uppercase("AZ");
	printf("%d\n", upper);
	upper = ft_str_is_uppercase("");
	printf("%d\n", upper);
	upper = ft_str_is_uppercase("@");
	printf("%d\n", upper);
	upper = ft_str_is_uppercase("[");
	printf("%d\n", upper);

	//ex06
	printf("----------------------\n");
	printf("EX06\n");
	int printable;

	printable = ft_str_is_printable("! ~");
	printf("%d\n", printable);
	printable= ft_str_is_printable("");
	printf("%d\n", printable);
	printable = ft_str_is_printable("\a");
	printf("%d\n", printable);
	printable = ft_str_is_printable("\v");
	printf("%d\n", printable);
	// \0 null
	// \a bell
	// \b backspace
	// \t tab
	// \v tab verti
	
	//ex07
	printf("----------------------\n");
	printf("EX07\n");
	char	str07[] = "hello";
	
	printf("%s\n", str07);
	ft_strupcase(str07);
	printf("%s\n", str07);

	//ex08
	printf("----------------------\n");
	printf("EX08\n");
	char	str08[] = "42 AB C C00L +~^";
	
	printf("%s\n", str08);
	ft_strlowcase(str08);
	printf("%s\n", str08);
	
	//ex09
	printf("----------------------\n");
	printf("EX09\n");
	char	str09[] = "-f:Ai|P'}Cd,Kmm	dhh9vaa;}3@^Yt)7.S40`Q?@Cb]";
	
	printf("%s\n", str09);
	ft_strcapitalize(str09);
	printf("%s\n", str09);
}
