#include "../incs/ft_printf.h"

unsigned char	*check_null(unsigned char *s, unsigned char *res)
{
	if (!ft_strchr((const char*)s, '1'))
	{
		free(res);
		res = (unsigned char*)ft_strnew(3);
		res[0] = '0';
		res[1] = '.';
		res[2] = '0';
	}
	return (res);
}

unsigned char	*create_infinity_nan(unsigned char *res, t_printf *pr)
{
	if (pr->flags & INF || pr->flags & NAN)
	{
		free(res);
		res = (unsigned char*)ft_strnew(3);
		res[0] = pr->flags & INF ? 'i' : 'n';
		res[1] = pr->flags & INF ? 'n' : 'a';
		res[2] = pr->flags & INF ? 'f' : 'n';
		(pr->type == 'e') ? (pr->type = 'f') : 0;
		(pr->type == 'E') ? (pr->type = 'F') : 0;
	}
	if (((pr->type == 'F') && (pr->flags & INF))
	|| pr->flags & NAN)
	{
		pr->capitalize = 1;
		ft_capitalize(pr, (char*)res);
	}
	return (res);
}

unsigned char	*check_infinity_nan(unsigned const char *s,
		t_printf *pr, unsigned char *res)
{
	int i;

	i = 1;
	while (s[i] == '1' && i <= 12)
	{
		if (i == 11)
		{
			pr->flags &= ~ZERO;
			pr->flags |= INF;
		}
		if (i == 12)
		{
			pr->flags &= ~INF;
			pr->flags &= ~ZERO;
			pr->flags &= ~PLUS;
			pr->flags |= NAN;
		}
		i++;
	}
	res = create_infinity_nan(res, pr);
	return (res);
}
