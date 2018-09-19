#include "libft.h"

static int	check_if_whitespace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	l;
	char			*r;

	l = 0;
	ptr = s;
	while (*s && check_if_whitespace(*s) == 1)
		s++;
	while (s[l] && check_if_whitespace(s[l]) == 0)
		l++;
	r = ft_strnew(l);
	ft_memcpy((void*)(r), (void const*)(s), l);
	return (r);
}