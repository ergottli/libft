#include "libft.h"

t_desdlist		*ft_create_desdlist(void)
{
	t_desdlist	*new;

	if (!(new = (t_desdlist*)malloc(sizeof(t_desdlist))))
		return (NULL);
	new->start = NULL;
	new->end = NULL;
	new->ptr = NULL;
	new->mem = 1;
	return (new);
}
