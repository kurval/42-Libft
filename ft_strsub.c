/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:08:58 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/25 10:09:00 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned intstart, size_t len)
{
	char *sub;

	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	sub = ft_strncpy(sub, (char*)s + intstart, len);
	return (sub);
}
