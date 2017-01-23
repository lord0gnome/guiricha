/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 12:48:40 by guiricha          #+#    #+#             */
/*   Updated: 2017/01/23 15:00:04 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/stat.h>
#include <stdint.h>
#include <sys/types.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <pwd.h>
#include <grp.h>

t_stat_data	*ft_stat(char *filename)
{
	struct stat	retstat;
	t_stat_data	*d;

	d = (t_stat_data *)malloc(sizeof(t_stat_data));
	if (!d)
		return (NULL);
	if (stat(filename, &retstat) != -1)
	{
		d->pwd = getpwuid(retstat.st_uid);
		d->dstr = ctime(&(retstat.st_mtime));
	}
	else
		return (NULL);
	d->ptr = &retstat;
	return (d);
}
