/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:01:03 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/25 10:04:40 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

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
