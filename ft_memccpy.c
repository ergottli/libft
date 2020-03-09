#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*to;
	unsigned const char *from;

	i = 0;
	to = dst;
	from = src;
	while (i < n)
	{
		to[i] = from[i];
		if ((unsigned char)c == from[i])
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
