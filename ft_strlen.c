#include <string.h>

size_t	ft_strlen(const char *s)
{
	const char *temp;

	temp = s;
	if (!s)
		return (0);
	while (*s)
		++s;
	return ((size_t)(s - temp));
}
