/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:16:22 by guiricha          #+#    #+#             */
/*   Updated: 2015/11/26 11:28:26 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup(const char *s1)
{
	int		length;
	char	*new;
	int		i;

	length = ft_strlen(s1) + 1;
	new = (char *)malloc(sizeof(char) * length);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < (length - 1))
	{
		new[i] = s1[i];
	}
	new[i] = '\0';
	return (new);
}
