int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int diff;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}
