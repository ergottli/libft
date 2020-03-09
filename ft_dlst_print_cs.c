#include "libft.h"

void				ft_dlst_print_cs(t_dlist *dlst)
{
	if (!dlst)
		return ;
	ft_putnbr(dlst->content_size);
	ft_putchar('\n');
}
