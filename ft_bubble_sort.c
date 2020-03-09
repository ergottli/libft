#include "libft.h"

void	ft_bubble_sort(char *s)
{
	int i;
	int	max;

	if (!s)
		return ;
	i = 1;
	max = ft_strlen(s);
	while (i < max)
	{
		while (i < max)
		{
			if (s[i - 1] > s[i])
				ft_swap(&s[i - 1], &s[i]);
			i++;
		}
		i = 1;
		max--;
	}
}
