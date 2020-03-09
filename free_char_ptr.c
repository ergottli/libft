#include "libft.h"

int	free_char_ptr(char *ptr, int out)
{
	ft_memdel((void*)&ptr);
	return (out);
}
