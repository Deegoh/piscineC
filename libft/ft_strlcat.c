#include "libft.h"

size_t	ft_strlcat(char	*dst, char	*src, size_t size)
{
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	i = 0;
	if (size <= dstlen)
		return (size + ft_strlen(src));
	while (src[i] && dstlen < size)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + i);
}
