/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtonbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:11:06 by guiricha          #+#    #+#             */
/*   Updated: 2016/11/30 14:52:16 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtonbr(char *str, long long *nbr, int base)
{
	if ((base < 2 || base > 16))
		return (-1);
	*nbr = 0;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		*nbr = (*nbr * base) + ((*str) - 48);
		str++;
	}
	if (*str)
		return (-2);
	return (1);
}
