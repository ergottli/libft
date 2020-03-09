#include "libft.h"

void				ft_lst_print(t_list *lst, unsigned char type, char n_flag)
{
	if (!lst)
		return ;
	if (type & (1u << 5u))
	{
		while (lst)
		{
			ft_putstr(lst->content);
			if (n_flag)
				ft_putchar('\n');
			lst = lst->next;
		}
	}
	else if (type & (1u << 7u))
	{
		while (lst)
		{
			ft_putnbr((int)lst->content);
			if (n_flag)
				ft_putchar('\n');
			lst = lst->next;
		}
	}
}
