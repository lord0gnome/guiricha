/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:40:39 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 13:41:37 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;

	d = dst;
	s = (char *)src;
	while (--size)
		*d++ = *s++;
	*d = '\0';
	return (ft_strlen((char *)src));
}
