#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst == src)
		return (0);
	if (src > dst)
	{
		while (++i < n)
			((char *)dst)[i] = ((char *)src)[i];
	}
	else
	{
		while(n)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}
