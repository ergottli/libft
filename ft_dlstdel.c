#include "libft.h"

void			ft_dlstdel(t_dlist **dlst, void (*del)(void *, size_t))
{
	t_dlist		*next;
	t_dlist		*prev;
	t_dlist		*cur;

	if (!*dlst)
		return ;
	cur = *dlst;
	prev = cur->prev;
	while (cur)
	{
		next = cur->next;
		ft_dlstdelone(&cur, del);
		cur = next;
	}
	cur = prev;
	while (cur)
	{
		prev = cur->next;
		ft_dlstdelone(&cur, del);
		cur = prev;
	}
	*dlst = NULL;
}
