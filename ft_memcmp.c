#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*str1;
	unsigned const char	*str2;
	int					res;

	i = 0;
	res = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((str1[i] != str2[i]) || (i + 1 == n))
			break ;
		i++;
	}
	res = str1[i] - str2[i];
	return (res);
}
