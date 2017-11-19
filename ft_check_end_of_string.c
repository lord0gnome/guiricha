/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_end_of_string.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 12:14:04 by guiricha          #+#    #+#             */
/*   Updated: 2017/11/19 12:18:21 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_end_of_string(char *string, char *pattern)
{
	string += ft_strlen(string) - ft_strlen(pattern);
	while (*string && *pattern)
	{
		if (*string != *pattern)
		return (0);
		string++;
		pattern++;
	}
	return (1);
}
