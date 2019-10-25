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
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i])
		j++;
	i = 0;
	while (i + j < (int)dstsize && src[i] != '\0')
	{
		dst[len + i] = src[i];
		i++;
	}
	if (dstsize != '\0' && (i + j) <= (int)dstsize)
	{
		dst[len + 1] = '\0';
		i++;
		return (j + i);
	}
	return (j + i);
}
