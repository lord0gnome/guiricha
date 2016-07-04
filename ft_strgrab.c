/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strgrab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/04 16:11:09 by guiricha          #+#    #+#             */
/*   Updated: 2016/07/04 16:39:46 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strgrab(const char *str, char delim)
{
	int	i;

	i = 0;
	if (*str == 0)
		return (NULL);
	while (str[i] && str[i] != delim)
		i++;
	if (i)
		return (ft_strndup(str, i));
	return (NULL);
}
