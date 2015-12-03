/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:59:52 by guiricha          #+#    #+#             */
/*   Updated: 2015/11/27 20:27:35 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] && (s[i] != (unsigned char)c))
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}
