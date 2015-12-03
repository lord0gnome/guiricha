/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:53:54 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 12:02:09 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *find;

	find = NULL;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			find = (char *)s;
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (find);
}
