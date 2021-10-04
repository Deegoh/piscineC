#include "libft.h"

size_t	ft_strlcpy(char	*dst, char	*src, size_t	size)
{
	if (size == 0)
		return (0);
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (size);
}
