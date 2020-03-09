#include "libft.h"

void	ft_dlstadd_right(t_dlist **dlst, t_dlist *new)
{
	if (!new)
		return ;
	(*dlst)->next = new;
	new->prev = *dlst;
	*dlst = new;
}
