/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:31:19 by vkurkela          #+#    #+#             */
/*   Updated: 2019/07/22 18:05:55 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *copy;

	i = 0;
	copy = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		copy[i] = f(tab[i]);
		i++;
	}
	return (copy);
}
