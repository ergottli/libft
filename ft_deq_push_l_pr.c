#include "libft.h"

short	ft_deq_push_l_pr(t_desdlist **deq, void *content, size_t cs, size_t pr)
{
	t_dlist		*new;

	if (!*deq)
		return (0);
	if (!(new = ft_dlstnew(content, cs)))
		return (0);
	new->pr = pr;
	if ((*deq)->start == NULL)
	{
		(*deq)->start = new;
		(*deq)->end = (*deq)->start;
		return (1);
	}
	ft_dlstadd_left_prior(&(*deq)->start, &(*deq)->end, new);
	return (1);
}
