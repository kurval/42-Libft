/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 17:08:38 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/24 09:11:49 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = (int)len;
	if (d == NULL)
		return (NULL);
	if (s <= d)
	{
		while (i--)
			d[i] = s[i];
	}
	else
		ft_memcpy(dst, src, len);
	return (d);
}
