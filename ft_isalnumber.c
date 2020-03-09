#include "./libft.h"

int		ft_isalnumber(char *str)
{
	if (!str || !*str)
		return (0);
	while (*str)
	{
		if (!ft_isalnum(*str))
			return (0);
		++str;
	}
	return (1);
}
