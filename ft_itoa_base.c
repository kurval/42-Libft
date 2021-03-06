/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 11:31:33 by vkurkela          #+#    #+#             */
/*   Updated: 2020/01/09 11:40:15 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static unsigned int	num_len(long value, int base)
{
	int	size;

	size = 1;
	if (base != 10 && value < 0)
		value = -value;
	if (value < 0)
		size++;
	while (value / base)
	{
		size++;
		value /= base;
	}
	return (size);
}

char				*ft_itoa_base(int value, int base)
{
	int				size;
	long			nbr;
	char			*res;
	char			*str_base;

	nbr = value;
	str_base = "0123456789ABCDEF";
	if (base < 2 || base > 16)
		return (NULL);
	size = num_len(nbr, base);
	if (!(res = (char*)malloc(sizeof(*res) * (size + 1))))
		return (NULL);
	res[size--] = '\0';
	res[0] = (value < 0 ? '-' : '0');
	if (value < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		res[size--] = str_base[nbr % base];
		nbr /= base;
	}
	return (res);
}
