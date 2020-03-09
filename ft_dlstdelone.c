#include "libft.h"

void	ft_dlstdelone(t_dlist **dlst, void (*del)(void*, size_t))
{
	del((*dlst)->content, (*dlst)->content_size);
	ft_memdel((void**)dlst);
}
