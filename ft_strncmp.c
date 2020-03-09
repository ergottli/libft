#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((s1[i] != s2[i]) || (i + 1 == n) ||
				(s1[i] == '\0') || (s2[i] == '\0'))
			break ;
		i++;
	}
	diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
