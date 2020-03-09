#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*to;
	unsigned const char	*from;

	i = 0;
	to = dst;
	from = src;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (dst);
}
