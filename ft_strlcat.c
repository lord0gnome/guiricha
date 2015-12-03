/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:29:34 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 13:44:25 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	orgdst;
	size_t	position;
	size_t	numfree;

	orgdst = (size_t)ft_strlen(dst);
	position = 0;
	numfree = 0;
	while (dst[position])
	{
		if (position == size)
			return (position + ft_strlen(src));
		position++;
	}
	numfree = position;
	while (dst[numfree] == '\0')
		numfree++;
	ft_strlcpy(&dst[position], src, size - position);
	return ((size_t)ft_strlen(src) + orgdst);
}
