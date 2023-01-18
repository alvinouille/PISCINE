/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:42:24 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:45:21 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*elem;

	if ((*begin_list1) == 0)
		(*begin_list1) = begin_list2;
	else
	{
		elem = *begin_list1;
		while (elem->next)
			elem = elem->next;
		elem->next = begin_list2;
	}
}

/* int	main(void)
{
	t_list *beg;
	t_list *beg2;
	t_list a2;
	t_list b2;
	t_list a;
	t_list b;

	beg = &a;
	beg2 = &a2;
	a.next = &b;
	a2.next = &b2;
	b.next = 0;
	b2.next = 0;
	a.data = "a";
	a2.data = "1";
	b.data = "b";
	b2.data = "2";
	ft_list_merge(&beg, beg2);
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
