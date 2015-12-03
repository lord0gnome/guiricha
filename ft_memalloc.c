/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:35:25 by guiricha          #+#    #+#             */
/*   Updated: 2015/12/03 13:03:31 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*new;

	if (size == 0)
		return (NULL);
	new = (void *)malloc(sizeof(char) * size);
	if (new)
		ft_bzero(new, size);
	return (new);
}
