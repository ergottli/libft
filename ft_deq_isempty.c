#include "libft.h"

short	ft_deq_isempty(t_desdlist *deq)
{
	if (!deq)
		return (1);
	if (!(deq->start && deq->end))
		return (1);
	return (0);
}
