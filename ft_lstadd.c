#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!(new))
		return ;
	new->next = *alst;
	*alst = new;
}
