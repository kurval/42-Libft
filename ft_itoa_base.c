#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		size(long nb, int base)
{
	int		len = 0;

	if (nb < 0 && base == 10)
	{
		len++;
		nb = nb * -1;
	}
	else if (nb < 0)
		nb = nb * -1;
	while (nb > 0)
	{
		len++;
		nb = nb / base;
	}
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	char	*str;
	char	tab[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int		i;
	long	nb;
	
	nb = value;
	i = size(nb, base);
	str = (char*)malloc(sizeof(char) * (i + 1));
	str[i--] = '\0';
	if (value == 0 || base < 2 || base > 16)
		return (ft_strdup("0"));	
	if (nb < 0 && base == 10)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	else if (nb < 0)
		nb = nb * -1;
	while (nb > 0)
	{
		str[i] = tab[nb % base];
		nb = nb / base;
		i--;
	}
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_itoa_base(31, 17));

	return (0);	
}
