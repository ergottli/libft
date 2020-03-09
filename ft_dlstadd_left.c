#include "libft.h"

void	ft_dlstadd_left(t_dlist **dlst, t_dlist *new)
{
	if (!new)
		return ;
	(*dlst)->prev = new;
	new->next = *dlst;
	*dlst = new;
}
