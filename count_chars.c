#include "libft.h"

int			count_chars(char *str, char c)
{
	int		count;

	count = 0;
	while (*str)
	{
		if (*str == c)
			++count;
		++str;
	}
	return (count);
}
