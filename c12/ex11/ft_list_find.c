/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:24:14 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:44:40 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if (((*cmp)(list_ptr->data, data_ref)) == 0)
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (0);
}

/* int	main(void)
{
	t_list *beg;
	t_list a;
	t_list b;

	beg = &a;
	a.next = &b;
	b.next = 0;
	a.data = "a";
	b.data = "b";
	ft_list_push_front(beg, "0");
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
