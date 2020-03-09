#include "libft.h"

unsigned int			ft_start(char const *s)
{
	unsigned int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	return (i);
}

static size_t			ft_end(char const *s)
{
	int	max;

	max = ft_strlen(s) - 1;
	while ((max >= 0) && (s[max] == ' ' || s[max] == '\n' || s[max] == '\t'))
		max--;
	return ((size_t)max);
}

char					*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	start;
	size_t			len;

	if (!s)
		return (NULL);
	start = ft_start(s);
	len = ft_end(s) - start + 1;
	if (start == ft_strlen(s))
	{
		str = ft_strnew(1);
		return (str);
	}
	str = ft_strsub(s, start, len);
	return (str);
}
