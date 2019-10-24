#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	unsigned int i;
	unsigned int len;
	char *copy;

	i = 0;
	len = ft_strlen((char*)s);
	copy = (char*)malloc(sizeof(*copy) * len);
	if (s && f && copy)
	{
		while (i < len)
		{
			copy[i] = f(i ,s[i]);
			i++;
		}
		return (copy);
	}
	return (NULL);
	
}
