#include "libft.h"

void	ft_putnbr(int n)
{
	int		base;
	long	nb;

	base = 1;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	while (base <= nb / 10)
		base *= 10;
	while (base != 0)
	{
		ft_putchar(nb / base + '0');
		nb = nb % base;
		base = base / 10;
	}
}
