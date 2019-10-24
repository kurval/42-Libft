/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:27:16 by vkurkela          #+#    #+#             */
/*   Updated: 2019/10/21 10:10:32 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	dup = (char*)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (dup == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
