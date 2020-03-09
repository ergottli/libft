#include "../incs/ft_printf.h"

void	print_width(t_printf *pr)
{
	pr->width -= (pr->width >= pr->len) ? pr->len : pr->width;
	if (ft_numeric(pr->type) || pr->type == 'p')
		pr->toprint = (pr->flags & ZERO && pr->precision == -1) ? '0' : ' ';
	else
		pr->toprint = (pr->flags & ZERO) ? '0' : ' ';
	add_buf_symb(pr, pr->toprint, pr->width);
}
