#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			i;
	char		*str;
	int			len;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
