#include "libft.h"

char		**new_d_char_arr(int first, int second)
{
	int		i;
	char	**arr;

	i = -1;
	if (!(arr = (char**)malloc(sizeof(char*) * (first + 1))))
		return (NULL);
	arr[first] = NULL;
	while (++i < first)
	{
		if (!(arr[i] = ft_strnew(second)))
		{
			free_d_char_arr(arr, i);
			return (NULL);
		}
	}
	return (arr);
}
