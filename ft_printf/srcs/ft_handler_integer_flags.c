#include "../incs/ft_printf.h"

char	*null_handle(t_printf *pr, char *str)
{
	if (pr->precision == 0)
	{
		if (ft_decimal(pr->type) || pr->type == 'p' ||
		ft_hex(pr->type) || (pr->type == 'o' && !(pr->flags & HASH)))
		{
			if (pr->type == 'p' && pr->precision == 0)
				ft_memset((void*)str, '\0', 1);
			if (pr->type != 'p')
				ft_memset((void*)str, '\0', 1);
		}
	}
	return (str);
}

char	*ft_handler_precision(t_printf *pr, char *str)
{
	int		prec;
	char	*nulls;

	if (pr->precision > pr->numlen)
	{
		pr->precision -= ((pr->flags & HASH &&
				pr->type == 'o' && !g_isnull)) ? 1 : 0;
		prec = pr->precision - pr->numlen;
		nulls = ft_strnew(prec);
		ft_memset((void*)nulls, '0', (size_t)prec);
		str = ft_strjoin_free(nulls, str);
	}
	return (str);
}

char	*ft_handler_zerowidth(t_printf *pr, char *str)
{
	int		width;
	char	*nulls;

	if (pr->width > pr->numlen && pr->precision == -1)
	{
		if ((pr->flags & HASH && ft_octohex(pr->type) && !g_isnull)
		|| (pr->type == 'p'))
			pr->width -= (pr->type == 'o') ? 1 : 2;
		width = pr->width;
		width -= ((pr->flags & PLUS || pr->flags & SPACE)
			&& !(pr->type == 'p' || ft_octohex(pr->type))) ? 1 : 0;
		width -= pr->numlen;
		if (width > 0)
		{
			nulls = ft_strnew(width);
			ft_memset((void*)nulls, '0', (size_t)width);
			str = ft_strjoin_free(nulls, str);
		}
	}
	return (str);
}

char	*ft_handler_plus_space(t_printf *pr, char *str)
{
	char sign[2];

	sign[0] = (!pr->isnegative) ? '+' : '-';
	sign[1] = '\0';
	if (pr->flags & PLUS)
		str = ft_strrejoin_right(sign, str);
	if (pr->flags & SPACE)
		str = ft_strrejoin_right((char*)" ", str);
	return (str);
}

char	*ft_handler_hash(t_printf *pr, char *str)
{
	int len;

	len = ft_strlen(str);
	if (pr->type == 'p' || (ft_hex(pr->type) && len))
		str = ft_strrejoin_right((char*)"0x", str);
	if (pr->type == 'o' && len)
		str = ft_strrejoin_right((char*)"0", str);
	return (str);
}
