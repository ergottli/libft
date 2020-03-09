#include "../incs/ft_printf.h"

void			simple_float_print(unsigned char *str, t_printf *pr, int flag)
{
	if (pr->flags & MINUS_FLOAT)
		add_buf_symb(pr, '-', 1);
	else if (pr->flags & SPACE)
		add_buf_symb(pr, ' ', 1);
	else if (pr->flags & PLUS && !(pr->flags & NAN))
		add_buf_symb(pr, '+', 1);
	if (flag == 1)
		add_buf_str(pr, str);
}

void			hard_float_print(unsigned char *str, t_printf *pr)
{
	if (pr->flags & MINUS)
	{
		simple_float_print(str, pr, 1);
		add_buf_symb(pr, ' ', pr->width - pr->len);
	}
	else
	{
		pr->flags &= ~SPACE;
		if (!(pr->flags & ZERO))
		{
			(pr->flags & PLUS || pr->flags & MINUS_FLOAT) ?
			add_buf_symb(pr, ' ', pr->width - pr->len - 1) :
			add_buf_symb(pr, ' ', pr->width - pr->len);
			simple_float_print(str, pr, 1);
		}
		else
		{
			simple_float_print(str, pr, 0);
			(pr->flags & PLUS || pr->flags & MINUS_FLOAT) ?
			add_buf_symb(pr, '0', pr->width - pr->len - 1) :
			add_buf_symb(pr, ' ', pr->width - pr->len);
			pr->flags &= ~255u;
			simple_float_print(str, pr, 1);
		}
	}
}

void			ft_put_float(unsigned char *str, t_printf *pr)
{
	pr->len = (int)ft_strlen((char*)str);
	if (pr->len >= pr->width)
		simple_float_print(str, pr, 1);
	else
		hard_float_print(str, pr);
	free(str);
}

void			print_float(unsigned char *str, t_printf *pr)
{
	int			len;

	pr->precision = (pr->precision == -1) ? 6 : pr->precision;
	len = ind_after_len(str);
	if (pr->precision > len && !((pr->flags & INF
	|| (pr->flags & NAN))))
		str = (unsigned char*)ft_strjoin_free((char*)str,
			str_zero(pr->precision - len));
	else if (pr->precision < len)
		str = round_float(pr, str);
	if (pr->type == 'e' || pr->type == 'E')
		str = ft_add_e(str, pr);
	ft_put_float(str, pr);
}
