/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudias <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 15:03:59 by gudias            #+#    #+#             */
/*   Updated: 2021/07/25 23:21:59 by gudias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
char	*ft_get_argument(char *str);
char	*ft_parsing(char	*path, int	bufsize);
char	*ft_search(char	*str, char	*tab);

void	ft_display(char	*out)
{
	ft_putstr(out);
	ft_putstr("\n");
}

int	main(int argc, char **argv)
{
	char	*key;
	char	*dict;
	char	*output;

	if (argc == 2 || argc == 3)
	{
		key = ft_get_argument(argv[argc - 1]);
		if (key)
		{
			if (argc == 2)
				dict = ft_parsing("numbers.dict", 4096);
			else
				dict = ft_parsing(argv[1], 4096);
			output = ft_search(key, dict);
			if (output)
			{
				ft_display(output);
			}
			else
				write(1, "Dict Error\n", 11);
			return (0);
		}
	}
	write (1, "Error\n", 6);
	return (-1);
}
