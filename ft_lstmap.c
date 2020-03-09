#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*n_list;
	t_list	*n_temp;

	if (!(lst) || !(f))
		return (NULL);
	if (!(n_list = f(lst)))
		return (NULL);
	lst = lst->next;
	n_temp = n_list;
	while (lst)
	{
		if (!(n_temp->next = f(lst)))
			return (NULL);
		n_temp = n_temp->next;
		lst = lst->next;
	}
	return (n_list);
}
