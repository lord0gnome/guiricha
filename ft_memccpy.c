/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:11:58 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 11:26:54 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*a;
	char			*b;

	a = dst;
	b = (char *)src;
	i = 0;
	while (i < (unsigned int)n)
	{
		if ((unsigned char)b[i] == (unsigned char)c)
		{
			a[i] = b[i];
			return (&a[i + 1]);
		}
		else
			a[i] = b[i];
		i++;
	}
	return (NULL);
}
