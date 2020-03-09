#include "../incs/ft_printf.h"

int		types_checker(char c)
{
	int flag;

	flag = 0;
	if (c == 'd' || c == 'i' || c == 'o' || c == 'u' || c == 'f' || c == 'e')
		flag = 1;
	if (c == 'U' || c == 'x' || c == 'X' || c == 'c' || c == 'F' || c == 'E')
		flag = 1;
	if (c == 's' || c == 'p' || c == '%')
		flag = 1;
	return (flag);
}

int		spec_checker(char c)
{
	if (c == 'h' || c == 'l' || c == 'j' || c == 'z' || c == 'L')
		return (1);
	return (0);
}

int		flags_checker(char c)
{
	if (c == '+' || c == '-' || c == ' ' || c == '#' || c == '0')
		return (1);
	return (0);
}

void	parse_types(t_printf *pr)
{
	const char *ptr;

	ptr = pr->form;
	while ((flags_checker(*ptr) || ft_isdigit(*ptr) || spec_checker(*ptr)
	|| *ptr == '.') && *ptr != '%' && *(ptr + 1))
		ptr++;
	pr->type = *ptr;
}

void	parse_flags(t_printf *pr)
{
	const char *ptr;

	ptr = pr->form;
	pr->flags = 0;
	while (!(types_checker(*ptr)) && *ptr)
	{
		if (flags_checker(*ptr))
		{
			(*ptr == '+') ? pr->flags |= PLUS : 0;
			(*ptr == '-') ? pr->flags |= MINUS : 0;
			(*ptr == ' ' && !(pr->flags & PLUS))
			? pr->flags |= SPACE : 0;
			(*ptr == '#') ? pr->flags |= HASH : 0;
			(*ptr == '0' && *(ptr - 1) != '.') ? pr->flags |= ZERO : 0;
		}
		if (ft_isdigit(*ptr))
			while (ft_isdigit(*ptr))
				ptr++;
		else
			ptr++;
	}
	(pr->flags & PLUS) ? pr->flags &= ~SPACE : 0;
	(pr->flags & MINUS) ? pr->flags &= ~ZERO : 0;
}
