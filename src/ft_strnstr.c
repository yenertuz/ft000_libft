#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, unsigned int l)
{
	unsigned int	l2;
	const char		*ptr;

	l2 = ft_strlen(n);
	ptr = h + l;
	while (*h && h < ptr)
	{
		if (ft_memcmp((const void*)(h), (const void*)(n), l2 + 1))
			return (h);
		h++;
	}
	return (0);
}