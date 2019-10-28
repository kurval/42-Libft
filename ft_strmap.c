/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:08:08 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/28 19:19:49 by vkurkela         ###   ########.fr       */
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
	if (!(copy = (char*)malloc(sizeof(*copy) * len + 1)))
		return (NULL);
	if (s && f)
	{
		while (s[i] != '\0')
		{
			copy[i] = f(s[i]);
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	return (NULL);
}
