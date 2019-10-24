/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 09:46:37 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/23 11:22:25 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	totlen;
	int		len;
	int		i;

	len = ft_strlen(dst);
	i = 0;
	totlen = len;
	while (i < (int)dstsize)
	{
		dst[len + i] = src[i];
		i++;
		totlen = totlen + 1;
	}
	if (dstsize != 0 && len <= (int)dstsize)
	{
		dst[totlen] = '\0';
		return (totlen);
	}
	return (totlen);
}
