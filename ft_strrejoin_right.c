#include "libft.h"
#include <stdlib.h>

char	*ft_strrejoin_right(const char *s1, char *s2)
{
	size_t	length;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	length = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = ft_strnew(length)))
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	free(s2);
	return (str);
}
