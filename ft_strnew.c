#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;

	if (size > size + 1)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str = ft_memset(str, '\0', size + 1);
	return (str);
}
