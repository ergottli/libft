#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if ((unsigned char)c == str[i])
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
