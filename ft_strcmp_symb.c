#include "libft.h"

int			ft_strcmp_symb(const char *s1, const char *s2, char symb)
{
	size_t	i;
	int		diff;

	i = 0;
	while (s1[i] && s2[i] && s1[i] != symb && s2[i] != symb)
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
