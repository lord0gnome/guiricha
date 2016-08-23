/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_linked_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 13:01:49 by guiricha          #+#    #+#             */
/*   Updated: 2016/08/23 17:32:16 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_swap_next_members(t_s_list **m1, t_s_list **m2)
{
	t_s_list	tmp;


	tmp = (**m1).next;
	(*m1)->next = 

	ft_putchar('\n');
	ft_putendl((*m1)->str);
	ft_putendl((*m1)->next->str);
	ft_putendl((*m2)->str);
	ft_putendl((*m2)->next->str);
	ft_putchar('\n');
}

t_s_list	*ft_create_s_list(char *str, char flag)
{
	t_s_list	*new;

	if (!(new = (t_s_list *)malloc(sizeof(t_s_list))))
		return (NULL);
	new->str = ft_strdup(str);
	new->flag = flag;
	new->next = NULL;
	return (new);
}

t_s_list	*ft_add_s_list(char *str, char flag, t_s_list *begin)
{
	t_s_list	*travel;
	t_s_list	*new;

	if (!begin)
		return (new = ft_create_s_list(str, flag));
	travel = begin;
	while (travel && travel->next)
		travel = travel->next;
	if (!(new = (t_s_list *)malloc(sizeof(t_s_list))))
		return (NULL);
	travel->next = new;
	new->str = ft_strdup(str);
	new->flag = flag;
	new->next = NULL;
	return (begin);
}
