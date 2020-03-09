void	ft_strclr(char *s)
{
	int i;

	i = -1;
	if (s)
	{
		while (s[++i])
			s[i] = '\0';
	}
}
