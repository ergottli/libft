#include "libft.h"

void	ft_lst_append(t_list **alst, t_list *new)
{
	t_list *temp;

	if (!(new))
		return ;
	temp = *alst;
	if (temp == NULL)
		*alst = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
