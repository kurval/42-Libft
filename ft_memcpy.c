/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:14:32 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/23 17:02:32 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	int				i;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (i < (int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
