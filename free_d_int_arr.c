#include "libft.h"

void	free_d_int_arr(int **arr, int len)
{
	int i;

	i = -1;
	while (++i < len)
		if (arr[i] != NULL)
			free(arr[i]);
	if (arr != NULL)
		free(arr);
}
