/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findfirstlastdelim.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 14:40:35 by guiricha          #+#    #+#             */
/*   Updated: 2016/08/18 15:34:32 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_findfirstlastdelim(char *str, char delim, int last)
{
	int	i;

	i = 0;
	if (last)
	{
		while (str[i])
			i++;
		while (i >= 0 && str[--i])
		{
			if (str[i] == delim)
				return (i);
		}
	}
	else
		while (str[i])
		{
			if (str[i] == delim)
				return (i);
			i++;
		}
	if (!str[i])
		return (-1);
	return (0);
}
