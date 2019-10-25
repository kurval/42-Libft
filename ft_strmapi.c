/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:04:03 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/25 10:11:15 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*copy;

	i = 0;
	len = ft_strlen((char*)s);
	copy = (char*)malloc(sizeof(*copy) * len);
	if (s && f && copy)
	{
		while (i < len)
		{
			copy[i] = f(i, s[i]);
			i++;
		}
		return (copy);
	}
	return (NULL);
}
