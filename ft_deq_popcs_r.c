#include "libft.h"

size_t			ft_deq_popcs_r(t_desdlist **deq)
{
	int			flag;
	t_dlist		*temp;
	size_t		res;

	flag = ((*deq)->start == (*deq)->end) ? 1 : 0;
	res = (*deq)->end->content_size;
	temp = (*deq)->end->prev;
	if (temp)
		temp->next = NULL;
	ft_dlstdelone(&((*deq)->end), ft_content_del);
	(*deq)->end = temp;
	if (flag == 1)
		(*deq)->start = NULL;
	return (res);
}
