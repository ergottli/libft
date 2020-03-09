#include "libft.h"

char	*free_d_char_arr(char **arr, int len)
{
	int i;

	i = -1;
	if (!arr)
		return (NULL);
	if (len == 0)
		while (arr[len])
			++len;
	if (len == 0)
		return (NULL);
	while (++i < len)
		if (arr[i] != NULL)
			ft_strdel(&arr[i]);
	free(arr);
	arr = NULL;
	return (NULL);
}
