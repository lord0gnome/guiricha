/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:29:34 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/09 16:17:28 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	position;

	position = 0;
	while (dst[position])
	{
		if (position == size)
			return (size + ft_strlen(src));
		position++;
	}
	ft_strlcpy(&dst[position], src, size - position);
	return (ft_strlen(src) + position);
}
