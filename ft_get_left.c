#include "libft.h"

t_dlist				*ft_get_left(t_dlist **dlst)
{
	t_dlist			*temp;

	if (!*dlst)
		return (NULL);
	if ((*dlst)->next)
		(*dlst)->next->prev = NULL;
	temp = *dlst;
	*dlst = (*dlst)->next;
	temp->next = NULL;
	return (temp);
}
