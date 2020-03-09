#include "libft.h"

short		ft_init_desdlist(t_desdlist **deq)
{
	if (!*deq)
		return (0);
	(*deq)->start = NULL;
	(*deq)->end = NULL;
	(*deq)->ptr = NULL;
	(*deq)->mem = 0;
	return (1);
}
