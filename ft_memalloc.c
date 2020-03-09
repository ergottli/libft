#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*str;

	str = NULL;
	str = (void *)malloc(sizeof(size_t) * size);
	if (str == NULL)
		return (NULL);
	str = ft_memset(str, 0, size);
	return (str);
}
