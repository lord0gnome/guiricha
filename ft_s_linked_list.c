/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_linked_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 13:01:49 by guiricha          #+#    #+#             */
/*   Updated: 2016/09/27 16:20:24 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_print_members(t_s_list *list)
{
	while (list && list->flag != -1)
	{
		ft_putendl(list->str);
		list = list->next;
	}
}

void		ft_swap_members(t_s_list **m1, t_s_list **m2)
{
	t_s_list	*bck;

	bck = (t_s_list *)malloc(sizeof(t_s_list));
	if (!(*m1) || !(*m2))
		return ;
	bck->str = ft_strdup((*m1)->str);
	bck->flag = (*m1)->flag;
	free((*m1)->str);
	(*m1)->str = ft_strdup((*m2)->str);
	free((*m2)->str);
	(*m2)->str = ft_strdup(bck->str);
	(*m1)->flag = (*m2)->flag;
	(*m2)->flag = bck->flag;
}

t_s_list	*ft_create_s_list(char *str, char flag)
{
	t_s_list	*new;

	if (!(new = (t_s_list *)malloc(sizeof(t_s_list))))
		return (NULL);
	new->str = ft_strdup(str);
	new->flag = flag;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_s_list	*ft_add_s_list(char *str, char flag, t_s_list *begin)
{
	t_s_list	*travel;
	t_s_list	*new;

	if (!begin)
		return (new = ft_create_s_list(str, flag));
	travel = begin;
	if (!(new = (t_s_list *)malloc(sizeof(t_s_list))))
		return (NULL);
	while (travel && travel->next)
		travel = travel->next;
	travel->next = new;
	new->str = ft_strdup(str);
	new->flag = flag;
	new->next = NULL;
	new->prev = travel;
	return (begin);
}
