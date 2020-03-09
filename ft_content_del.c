#include "libft.h"

void	ft_content_del(void *content, size_t content_size)
{
	if (content)
	{
		ft_bzero(content, content_size);
		ft_memdel(&content);
	}
	content_size = 0;
}
