#include "libft.h"

int			ft_lst_node_cpy(t_list *lst)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (0);
	new->content = lst->content;
	new->content_size = lst->content_size;
	return (1);
}
