#include "libft.h"

void			ft_dlstiter_l(t_dlist *dlst, void (*f)(t_dlist *elem))
{
	t_dlist		*temp;

	if (!dlst || !f)
		return ;
	temp = dlst;
	while (temp)
	{
		f(temp);
		temp = temp->next;
	}
}
