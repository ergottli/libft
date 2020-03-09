#include "libft.h"

t_dlist				*ft_get_right(t_dlist **dlst)
{
	t_dlist			*temp;

	if (!*dlst)
		return (NULL);
	if ((*dlst)->prev)
		(*dlst)->prev->next = NULL;
	temp = *dlst;
	*dlst = (*dlst)->prev;
	temp->prev = NULL;
	return (temp);
}
