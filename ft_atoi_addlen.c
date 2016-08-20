/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_addlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:59:41 by guiricha          #+#    #+#             */
/*   Updated: 2016/08/20 16:34:15 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istruespace(int c)
{
	if (c == '\t' ||
		c == '\n' ||
		c == '\v' ||
		c == '\f' ||
		c == '\r' ||
		c == ' ')
		return (1);
	else
		return (0);
}

int			ft_atoi_addlen(int *var, const char *str)
{
	long	result;
	int		sign;
	char	len;

	result = 0;
	len = 0;
	while (ft_istruespace(*str))
	{
		str++;
		len++;
	}
	sign = (*str == '-') ? -1 : 1;
	if (*str == '-' || *str == '+')
	{
		len++;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	*var = result * sign;
	return (ft_nbrlen(result) + len);
}
