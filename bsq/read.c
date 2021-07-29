#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int	read_file(char parameters[], char	*map)
{
	int		filedesc;
	int		ret;
	char	buf[4096];

	filedesc = open (parameters, O_RDONLY);
	if (filedesc == -1)
		return (1);
	ret = read (filedesc, map, sizeof(buf));
	if (!ret)
		return (1);
	map[ret] = '\0';
	if (close(filedesc) == -1)
		return (1);
	if (buf < 0)
		return (1);
	return (0);
}
