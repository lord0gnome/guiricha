/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:53:40 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 13:56:14 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	if (size == 0)
	{
		new = (char *)malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		else
			*new = '\0';
		return (new);
	}
	else
		new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	while (i < size)
	{
		new[i++] = '\0';
	}
	new[i] = '\0';
	return (new);
}
