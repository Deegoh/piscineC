#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t	i;
	size_t	srclen;

	i = -1;
	srclen = ft_strlen(src);
	while (srclen < n)
		n--;
	while (++i < n)
	{
		if (((unsigned char *)src)[i] == c)
		{
			while (i <= n)
				n--;
			ft_memmove(dst, src, n);
			return ((unsigned char *)i);
		}
	}
	ft_memmove(dst, src, n);
	return (NULL);
}
