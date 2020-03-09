#include "libft.h"

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	if (nb >= 1)
	{
		while (sqrt <= nb)
		{
			if (sqrt * sqrt == nb)
				return (sqrt);
			if (sqrt * sqrt > nb)
				return (0);
			sqrt++;
		}
	}
	return (0);
}
