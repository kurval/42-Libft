#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	int i;
	int len;
	char *copy;

	i = 0;
	len = ft_strlen((char*)s);
	copy = (char*)malloc(sizeof(*copy) * len);
	if (s && f && copy)
	{
		while (i < len)
		{
			copy[i] = f(s[i]);
			i++;
		}
		return (copy);
	}
	return (NULL);
}
