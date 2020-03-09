#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next_list;
	t_list	*cur_list;

	cur_list = *alst;
	if (*alst)
	{
		while (cur_list)
		{
			next_list = cur_list->next;
			ft_lstdelone(&cur_list, del);
			cur_list = next_list;
		}
		*alst = NULL;
	}
}
