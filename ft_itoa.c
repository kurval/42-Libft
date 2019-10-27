#include "libft.h"

static	int	calc_len(int n)
{	
	long 	value;
	int	l;

	l = 1;	
	value = n;
	if (value < 0)
		l++;
	while (value / 10)
	{	
		value = value / 10;
		l++;
	}
	return(l);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	len;
	int	i;
	long	num;
	
	len = calc_len(n);
	i = 0;
	num = n;
	if(!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{	
		num = -num;
		str[i] = '-';
		i = 1;
	}
	while (len > i)
	{
		str[len - 1] = (num % 10) + 48;
		num = num / 10;
		len--;
	}
	return (str);
}
