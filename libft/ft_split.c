/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:56:29 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/10/17 19:20:57 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_count_words(const char *s, char c)
{
	int count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		split;
	int		j;
	int		start;
	int		len;

	if (!s || !c)
		return (NULL);
	i = 0;
	split = ft_count_words(s, c);
	res = malloc(sizeof(char *) * (split));
	if (!res)
		return NULL;
	j = 0;
	i = 0;
	start = 0;
	//printf("words%d\n", split);
	while (j < split && s[i])
	{
		while (s[i] == c && s[i + 1] != c)
		{
			i++;
			start = i;
		}
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			len = i - start + 1;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			printf("start:%d|wordlen:%d|\n", start, len);
			res[j] = ft_substr(s, start, len);
			j++;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}
/*
int main (void)
{
	char str[] = "      olol";
	char	c = ' ';
	int		i = 0;
	//char **res = ft_split(str, c);
	ft_split(str, c);
	while(i < 6)
		i++;
		//printf("%s|\n", res[i++]);
}
*/
