#include "libft.h"

char	**free_d_char_rarr(char **arr, int len)
{
	int	i;

	i = -1;
	if (!arr)
		return (NULL);
	if (len == 0)
		while (arr[len])
			++len;
	if (len == 0)
		return (0);
	while (++i < len)
		if (arr[i] != NULL)
			ft_strdel(&arr[i]);
	free(arr);
	arr = NULL;
	return (NULL);
}
