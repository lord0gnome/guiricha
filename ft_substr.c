/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:29:59 by guiricha          #+#    #+#             */
/*   Updated: 2017/01/19 15:43:42 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_substr(char *str, size_t start, size_t end)
{
	char	*ret;
	size_t	size;
	size_t	idx;

	if (start > end || !*str)
		return (NULL);
	size = end - start;
	ret = (char *)malloc(sizeof(size) + 1);
	ret[size] = '\0';
	idx = 0;
	while (idx < start)
		if (str[idx])
			idx++;
	if (idx != start)
		return (NULL);
	idx = 0;
	while (start < end && str[start])
		ret[idx++] = str[start++];
	while (!str[start] && start < end)
		ret[idx++] = '\0';
	return (ret);
}
