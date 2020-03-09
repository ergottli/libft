#include "../incs/ft_printf.h"

int	ft_octohex(char c)
{
	return (c == 'o' || c == 'x' || c == 'X');
}

int	ft_decimal(char c)
{
	return (c == 'd' || c == 'i' || c == 'u');
}

int	ft_numeric(char c)
{
	return (ft_octohex(c) || ft_decimal(c));
}

int	ft_signed(char c)
{
	return (c == 'd' || c == 'i');
}

int	ft_hex(char c)
{
	return (c == 'x' || c == 'X');
}
