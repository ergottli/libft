#include "libft.h"

void	ft_deq_del(t_desdlist **deq)
{
	ft_dlstdel(&(*deq)->start, ft_content_del);
	(*deq)->start = NULL;
	(*deq)->end = NULL;
	(*deq)->ptr = NULL;
	if ((*deq)->mem)
		ft_memdel((void*)deq);
	(*deq) = NULL;
}
