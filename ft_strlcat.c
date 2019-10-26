/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:46:37 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/25 17:21:18 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int len;
	int i;
	char *temp;

	len = 0;
	i = 0;
	temp = dst;
	while (temp[i])
	{
		len++;
		i++;
	}
	i = 0;
	while (i < (int)dstsize - (len + 1) && src[i] != '\0')
	{
		dst[len + i] = src[i];
		i++;
	}
	if ((int)dstsize != 0)
	{	
		dst[len +i] = '\0';
		if ((int)dstsize < len)
			return(ft_strlen(src) + (int)dstsize);
		return (ft_strlen(src) + len);
	}
	return (ft_strlen(src));
}
