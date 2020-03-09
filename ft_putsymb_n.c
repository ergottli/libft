#include "libft.h"
#include <unistd.h>

void	ft_putsymb_n(char c, int len)
{
	while (len)
	{
		ft_putchar(c);
		--len;
	}
}
