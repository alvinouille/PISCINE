/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:08:19 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/27 17:15:25 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*elem;
	t_list	*corps;
	t_list	*new;

	elem = *begin_list;
	corps = elem->next;
	new = ft_create_elem(data);
	while (elem->next)
	{
		if (((*cmp)(new->data, elem->data) <= 0) &&
			((*cmp)(new->data, corps->data) <= 0))
		{
			elem = elem->next;
			corps = corps->next;
		}
		if (((*cmp)(new->data, elem->data) <= 0) &&
			((*cmp)(new->data, corps->data) > 0))
		{
			elem->next = new;
			new->next = corps;
		}
	}
}	
