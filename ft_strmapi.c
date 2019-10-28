/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:04:03 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/28 19:29:22 by vkurkela         ###   ########.fr       */
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
	if (!(copy = (char*)malloc(sizeof(*copy) * len + 1)))
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			copy[i] = f(i, s[i]);
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}
