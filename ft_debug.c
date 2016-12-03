/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 13:30:49 by guiricha          #+#    #+#             */
/*   Updated: 2016/12/03 13:31:33 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_debug(int line)
{
	ft_putstr("ft_debug called at line ");
	ft_putnbr(line);
	ft_putchar('\n');
}
