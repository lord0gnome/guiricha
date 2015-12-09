/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:11:58 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/09 14:18:36 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
		{
			a[i] = b[i];
			return ((void *)(a + i + 1));
		}
		else
			a[i] = b[i];
		i++;
	}
	return (NULL);
}
