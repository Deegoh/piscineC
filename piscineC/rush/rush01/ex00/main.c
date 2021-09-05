#include <stdio.h>

void	ft_putchar(char	c);
void	ft_putstr(char	*str);
int		ft_strisnumeric(char	*str);
void	ft_putclue(char	*clue, char	tab[6][6]);
void	ft_resolve(char tab[6][6]);

int	main(int	argc, char **argv)
{
	int	col;
	int	line;
	int	i;
	char	tab[6][6];
	int	begin;
	int	finish;

	begin = 0;
	finish = 6;

	if (argc == 2 && ft_strisnumeric(argv[1]))
	{
		ft_putclue(argv[1], tab);
		ft_resolve(tab);
		line = begin;
		while (line < finish)
		{
			col = begin;
			i = 0;
			while (col < finish)
			{
			ft_putchar(tab[line][col]);
				ft_putchar(' ');
				col++;
				i++;
			}
			ft_putchar('\n');
			line++;
		}
		ft_putstr("J'ai remplie tous les indices connus et les lignes pour un total de 10. A toi de jouer.\n");
		return (1);
	}
	ft_putstr("Error\n");
	return (0);
}

int	ft_strisnumeric(char	*str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (!((*str >= '1' && *str <= '4') || *str == ' '))
		{
			return (0);
		}
		i++;
		str++;
	}
	if (!(i == 31))
		return (0);
	return (1);
}

void	ft_resolve(char	tab[6][6])
{
	int	rows;
	int	cols;
	int	fill;
	int empty;
	int prows;
	int pcols;
	int count;
	int checksum;

	rows = 1;
	cols = 1;
	while (tab[0][cols] != ' ')
	{
		if (tab[0][cols] == '4')
		{
			tab[1][cols] = '1';
			tab[2][cols] = '2';
			tab[3][cols] = '3';
			tab[4][cols] = '4';
		}
		if (tab[0][cols] == '1')
		{
			tab[1][cols] = '4';
		}
		if (tab[0][cols] == 3 && tab[4][cols] != ' ')
		{
			tab[3][cols] = '4';
		}
		cols++;
	}
	cols = 1;
	while (tab[5][cols] != ' ')
	{
		if (tab[5][cols] == '4')
		{
			tab[4][cols] = '1';
			tab[3][cols] = '2';
			tab[2][cols] = '3';
			tab[1][cols] = '4';
		}
		if (tab[5][cols] == '1')
		{
			tab[4][cols] = '4';
		}
		if (tab[5][cols] == 3 && tab[1][cols] != ' ')
		{
			tab[2][cols] = '4';
		}
		cols++;
	}
	rows = 1;
	while (tab[rows][0] != ' ')
	{
		if (tab[rows][0] == '4')
		{
			tab[rows][1] = '1';
			tab[rows][2] = '2';
			tab[rows][3] = '3';
			tab[rows][4] = '4';
		}
		if (tab[rows][0] == '1')
		{
			tab[rows][1] = '4';
		}
		if (tab[rows][0] == 3 && tab[rows][4] != ' ')
		{
			tab[rows][3] = '4';
		}
		rows++;
	}
	rows = 1;
	while (tab[rows][5] != ' ')
	{
		if (tab[rows][5] == '4')
		{
			tab[rows][4] = '1';
			tab[rows][3] = '2';
			tab[rows][2] = '3';
			tab[rows][1] = '4';
		}
		if (tab[rows][5] == '1')
		{
			tab[rows][4] = '4';
		}
		if (tab[rows][5] == 3 && tab[rows][1] != ' ')
		{
			tab[rows][2] = '4';
		}
		rows++;
	}
	rows = 1;
	while (rows <= 4)
	{
		fill = 0;
		empty = 0;
		cols = 1;
		checksum = 0;
		count = 0;
		while (cols <= 4)
		{
			if (tab[rows][cols] != ' ')
			{
				count++;
			}
			else
			{
				prows = rows;
				pcols = cols;
				empty++;
			}
			checksum += tab[rows][cols];
			if (empty == 1 && count == 3)
			{
				checksum = 10 - checksum - 32;
				tab[prows][pcols] = checksum;
			}
			cols++;
		}
		rows++;
	}
	cols = 1;
	while (cols <= 4)
	{
		fill = 0;
		empty = 0;
		rows = 1;
		checksum = 0;
		count = 0;
		while (rows <= 4)
		{
			if (tab[rows][cols] != ' ')
			{
				count++;
			}
			else
			{
				prows = rows;
				pcols = cols;
				empty++;
			}
			checksum += tab[rows][cols];
			if (empty == 1 && count == 3)
			{
				checksum = 10 - checksum - 32;
				tab[prows][pcols] = checksum;
			}
			rows++;
		}
		cols++;
	}
}

void	ft_putclue(char	*clue, char	tab[6][6])
{
	int rows;
	int cols;
	int i;
	int j;

	i = 0;
	j = 0;
	while (clue[i] != '\0')
	{
		if (clue[i] == ' ')
		{
			i++;
			continue ;
		}
		clue[j] = clue[i];
		i++;
		j++;
	}
	while (j < i)
	{
		clue[j] = '\0';
		j++;
	}
	i = 0;
	cols = 1;
	rows = 0;
	tab[0][0] = ' ';
	tab[5][0] = ' ';
	tab[0][5] = ' ';
	tab[5][5] = ' ';
	while (clue[i] != '\0')
	{
		if (i == 4)
		{
			rows = 5;
			cols = 1;
		}
		if (i == 8)
		{
			cols = 0;
			rows = 1;
			while (i < 12)
			{
				tab[rows][cols] = clue[i];
				i++;
				rows++;
			}
		}
		if (i == 12)
		{
			cols = 5;
			rows = 1;
			while (i < 16)
			{
				tab[rows][cols] = clue[i];
				i++;
				rows++;
			}
			break ;
		}
		tab[rows][cols] = clue[i];
		cols++;
		i++;
	}
	rows = 1;
	while (rows <= 4)
	{
		cols = 1;
		while (cols <= 4)
		{
			tab[rows][cols] = ' ';
			cols++;
		}
		rows++;
	}
}
