#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc(sizeof(*str) * len);
	if (str)
	{
		ft_strcpy(str, (char*)s1);
		str = ft_strcat(str, (char*)s2);
		return (str);
	}
	return (NULL);
}
