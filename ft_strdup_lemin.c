/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_lemin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:16:22 by guiricha          #+#    #+#             */
/*   Updated: 2016/06/28 13:50:14 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strdup_lemin(const char *s1)
{
	size_t	length;
	char	*new;
	size_t	i;

	length = ft_strlen(s1);
	if (!(new = ft_strnew(length + 1)))
		return (NULL);
	i = 0;
	while (i < (length))
	{
		new[i] = s1[i];
		i++;
	}
	if (length != 0)
		new[i++] = '\n';
	new[i] = '\0';
	return (new);
}
