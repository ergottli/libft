static	int	is_inv(const char c)
{
	if ((c == ' ') ||
		(c == '\t') ||
		(c == '\v') ||
		(c == '\f') ||
		(c == '\r') ||
		(c == '\n'))
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int			i;
	long long	res;
	int			sign;

	i = 0;
	res = 0;
	sign = 1;
	while (is_inv(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return ((int)res * sign);
}
