/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 16:14:02 by guiricha          #+#    #+#             */
/*   Updated: 2016/07/04 16:40:20 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strndup(const char *str, size_t n)
{
	size_t	len;
	size_t	i;
	char	*new;

	len = ft_strlen(str);
	if (!(*str))
		return (NULL);
	if (len <= n)
		return (new = ft_strdup(str));
	i = 0;
	if (!(new = (char *)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (str[i] && i < n)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
