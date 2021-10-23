/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 12:45:59 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/25 22:01:54 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char	*str);
int		ft_strlen(char	*str);
int		ft_is_space(char	c);

char	*ft_getdict(char	*path, int	bufsize)
{
	char	*buf;
	int		fd;
	int		ret;

	buf = malloc(sizeof(char) * bufsize);
	if (!buf)
		return (NULL);
	printf("malloc");
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ret = read(fd, buf, bufsize);
	buf[ret] = '\0';
	if (close(fd) == -1)
	{
		return (0);
	}
	free(buf);
	return (buf);
}

int	ft_is_alpha(char	c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

int	ft_is_num(char	c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

char	*ft_normalize_dict(char	*dict, int len)
{
	int		i;
	int		j;
	char	*norm;
	int		trim;

	i = 0;
	j = 0;
	trim = 1;
	norm = malloc(sizeof(char) * len);
	while (dict[i] != '\0')
	{
		if (ft_is_space(dict[i]) && trim)
		{
			i++;
			continue ;
		}
		else
			trim = 0;
		if (ft_is_num(dict[i]) && ft_is_space(dict[i + 1]))
			trim = 1;
		if (dict[i] == ':' && ft_is_space(dict[i + 1]))
			trim = 1;
		if (ft_is_alpha(dict[i]) && ft_is_space(dict[i + 1]))
			trim = 1;
		norm[j] = dict[i];
		i++;
		j++;
	}
	//free(norm);
	norm[j] = '\0';
	return (norm);
}

char	*ft_parsing(char	*path,	int bufsize)
{
	char	*buf;
	char	*norm;

	buf = ft_getdict(path, bufsize);
	if (!buf)
		return (NULL);
	norm = ft_normalize_dict(buf, ft_strlen(buf));
	return (norm);
}
