/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:08:08 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/25 10:08:11 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*copy;

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
