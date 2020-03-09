#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		base;
	long	nb;

	base = 1;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	while (base <= nb / 10)
		base *= 10;
	while (base != 0)
	{
		ft_putchar_fd(nb / base + '0', fd);
		nb = nb % base;
		base = base / 10;
	}
}
