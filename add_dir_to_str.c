/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_dir_to_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 11:37:03 by guiricha          #+#    #+#             */
/*   Updated: 2017/11/19 12:24:19 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*add_dir_to_str(const char *s1, const char *s2)
{
	char *ret;
	size_t	s1_len;
	size_t	s2_len;
	size_t	index;
	size_t	s2_index;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ret = (char *)malloc(sizeof(char) * s1_len + s2_len + 2);
	if (!ret)
		return (ret);
	index = 0;
	while (s1[index])
	{
		ret[index] = s1[index];
		index++;
	}
	ret[index] = '/';
	s2_index = 0;
	while (s2[s2_index])
	{
		index++;
		ret[index] = s2[s2_index];
		s2_index++;
	}
	ret[index + 1] = '\0';
	return (ret);
}
