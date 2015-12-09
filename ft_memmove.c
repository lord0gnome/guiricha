/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:04:13 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/09 14:19:02 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)dst;
	b = (char *)src;
	if (src <= dst)
	{
		a += len - 1;
		b += len - 1;
		while (len--)
			*a-- = *b--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
