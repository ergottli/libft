#include "libft.h"

short			ft_deq_push_l(t_desdlist **deq, void *content, size_t cs)
{
	t_dlist		*new;

	if (!*deq)
		return (0);
	if (!(new = ft_dlstnew(content, cs)))
		return (0);
	if ((*deq)->start == NULL)
	{
		(*deq)->start = new;
		(*deq)->end = (*deq)->start;
		return (1);
	}
	ft_dlstadd_left(&(*deq)->start, new);
	return (1);
}
