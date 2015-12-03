/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:25:57 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 15:25:37 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_isnegmaxint(int n)
{
	char	*ret;

	ret = NULL;
	if (n == -2147483648)
	{
		ret = ft_strnew(11);
		ret = "-2147483648";
	}
	return (ret);
}

char		*ft_itoa(int n)
{
	int		len;
	int		buf;
	char	*ret;
	size_t	i;

	if ((ret = ft_isnegmaxint(n)))
		return (ret);
	i = 0;
	len = (n < 0) ? 1 : 0;
	buf = n;
	while (n /= 10)
		len++;
	while (n <= -10)
		len++;
	ret = ft_strnew(len + 1);
	if (!ret)
		return (NULL);
	while (buf >= 10 || buf <= -10)
	{
		ret[len--] = (buf < 0) ? -(buf % 10) + '0' : buf % 10 + '0';
		buf /= 10;
	}
	ret[0] = (buf < 0) ? '-' : buf + '0';
	ret[1] = (buf < 0) ? -buf + '0' : ret[1];
	return (ret);
}
