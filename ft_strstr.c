/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:19:02 by guiricha          #+#    #+#             */
/*   Updated: 2015/11/26 12:10:39 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		i2;
	int		place;

	i = 0;
	i2 = 0;
	if (!s2[i])
		return ((char *)s1);
	while (s1[i])
	{
		place = i;
		while (s1[i] == s2[i2])
		{
			i++;
			i2++;
			if (s2[i2] == '\0')
				return ((char *)s1 + (i - i2));
		}
		i2 = 0;
		i = place;
		i++;
	}
	return (0);
}
