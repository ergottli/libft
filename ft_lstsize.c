#include "libft.h"

/*
** Returns number of items in list
**
** @param 		alst
** @return		len
*/

size_t				ft_lstsize(t_list *alst)
{
	size_t			len;

	len = 0;
	while (alst != NULL)
	{
		len++;
		alst = alst->next;
	}
	return (len);
}
