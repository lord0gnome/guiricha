/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrevncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 11:27:30 by guiricha          #+#    #+#             */
/*   Updated: 2017/01/23 15:00:58 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrevncmp(char *s1, char *s2, size_t len)
{
	size_t	ends1;
	size_t	ends2;

	if (len == 0 || !s1 || !s2)
		return (-1);
	ends1 = ft_strlen(s1);
	ends2 = ft_strlen(s2);
	while (len-- && ends2-- && ends1--)
		if (s1[ends1] != s2[ends2])
			break ;
	return (ft_abs(s1[ends1] - s2[ends2]));
}
