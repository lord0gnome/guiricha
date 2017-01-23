/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrijoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 11:00:19 by guiricha          #+#    #+#             */
/*   Updated: 2017/01/23 11:16:24 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrijoin(char *s1, char *s2, char *s3)
{
	size_t	retidx;
	char	*ret;
	size_t	total;

	if (!s1 || !s2 || !s3)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3);
	ret = (char *)malloc(sizeof(char) * (total + 1));
	ret[total] = '\0';
	retidx = 0;
	while (*s1)
		ret[retidx++] = *s1++;
	while (*s2)
		ret[retidx++] = *s2++;
	while (*s3)
		ret[retidx++] = *s3++;
	return (ret);
}
