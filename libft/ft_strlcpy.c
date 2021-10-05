#include "libft.h"

size_t	ft_strlcpy(char	*dst, char	*src, size_t	size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] && i + 1 < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}
