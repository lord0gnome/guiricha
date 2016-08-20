/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmpdelim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 17:11:34 by guiricha          #+#    #+#             */
/*   Updated: 2016/08/20 13:33:19 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmpdelim(const char *s1, const char *s2, char delim)
{
	while (*s1 && *s2 && (*s1) != delim && *s2 != delim)
	{
		s1++;
		s2++;
	}
	if ((*s1 == delim && *s1 == delim) || (!(*s2) && *s1 == delim))
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
