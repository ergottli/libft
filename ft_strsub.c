#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (i < len && s[start])
		str[i++] = s[start++];
	return (str);
}
