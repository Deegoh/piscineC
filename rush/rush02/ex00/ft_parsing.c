/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 12:45:59 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/27 14:38:52 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char	*str);
int		ft_strlen(char	*str);
int		ft_is_space(char c);

char	*ft_getdict(char	*path, int	bufsize)
{
	char	*buf;
	int		fd;
	int		ret;

	buf = malloc(sizeof(*buf) * bufsize);
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		return (NULL);
	}
	ret = read(fd, buf, bufsize);
	buf[ret] = '\0';
	if (close(fd) == -1)
	{
		return (NULL);
	}
	return (buf);
}

char	*ft_normalize_dict(char	*dict, int len)
{
	int		i;
	int		j;
	char	*norm;

	i = 0;
	j = 0;
	norm = malloc(sizeof(*norm) * len);
	while (dict[i] != '\0')
	{
		if (dict[i] == ' ')
		{
			i++;
		}
		else
		{	
			norm[j] = dict[i];
			i++;
			j++;
		}
	}
	norm[j] = '\0';
	return (norm);
}

char	*ft_parsing(char	*path,	int bufsize)
{
	char	*buf;
	char	*norm;

	buf = ft_getdict(path, bufsize);
	norm = ft_normalize_dict(buf, ft_strlen(buf));
	free(buf);
	return (norm);
}
