/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:56:38 by guiricha          #+#    #+#             */
/*   Updated: 2015/11/26 11:59:25 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s3;

	s3 = s1;
	while (*s3)
		s3++;
	while (*s2 && n--)
		*s3++ = *s2++;
	*s3 = '\0';
	return (s1);
}
