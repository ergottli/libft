#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if ((s == NULL) || (f == NULL))
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
