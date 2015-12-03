/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:00:19 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 11:31:30 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		i2;
	int		place;

	i = 0;
	i2 = 0;
	if (!s2[i])
		return ((char *)s1);
	while (s1[i] && ((size_t)i < n))
	{
		place = i;
		while ((s1[i] == s2[i2]) && (size_t)i < n)
		{
			i++;
			i2++;
			if (s2[i2] == '\0')
				return ((char *)s1 + (i - i2));
			if (s1[i] == '\0')
				return (NULL);
		}
		i2 = 0;
		i = place;
		i++;
	}
	return (NULL);
}
