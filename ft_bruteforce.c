#include "libft.h"

int		ft_linear_search(const char *s, const char c)
{
	int i;

	if (!s || !c)
		return (-2);
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}
