#include "libft.h"

int		ft_binary_search(char *s, char c)
{
	int min;
	int max;
	int mid;

	if (!s || !c)
		return (-2);
	min = 0;
	max = ft_strlen(s) - 1;
	while (min <= max)
	{
		mid = (max + min) / 2;
		if (s[mid] == c)
			return (mid);
		else if (s[mid] > c)
			max = mid - 1;
		else if (s[mid] < c)
			min = mid + 1;
	}
	return (-1);
}
