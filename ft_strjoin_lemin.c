/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_lemin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:08:06 by guiricha          #+#    #+#             */
/*   Updated: 2016/06/28 13:44:58 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin_lemin(char const *s1, char const *s2)
{
	char				*new;
	unsigned int		count;

	count = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	if (new == NULL)
		return (new);
	while (*s1)
	{
		*new++ = *s1++;
		count++;
	}
	*new++ = '\n';
	count++;
	while (*s2)
	{
		*new++ = *s2++;
		count++;
	}
	*new = '\0';
	return (new - count);
}
