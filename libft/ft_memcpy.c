/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilarbi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 22:00:50 by ilarbi            #+#    #+#             */
/*   Updated: 2017/01/13 14:57:22 by ilarbi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			j;
	unsigned char	*a;
	unsigned char	*b;

	j = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	while (j < n)
	{
		a[j] = b[j];
		j++;
	}
	return (a);
}
