#include "libft.h"

char 	*ft_strsub(char const *s, unsigned intstart, size_t len)
{
	char *sub;

	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	sub = ft_strncpy(sub, (char*)s + intstart, len);
	return (sub);
}
