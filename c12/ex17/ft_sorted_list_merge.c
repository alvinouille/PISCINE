/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:59:22 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:22:01 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

void	ft_list_sorted(t_list **begin_list, int (*cmp)())
{
	t_list	*list_ptr;
	void	*tmp;
	t_list	*dep;

	list_ptr = *begin_list;
	dep = *begin_list;
	while (list_ptr->next)
	{
		if (((*cmp)(list_ptr->data, list_ptr->next->data)) > 0)
		{
			tmp = list_ptr->data;
			list_ptr->data = list_ptr->next->data;
			list_ptr->next->data = tmp;
			list_ptr = dep;
		}
		else
			list_ptr = list_ptr->next;
	}
}

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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sorted(begin_list1, cmp);
}
/* int	cmp(char *s1, char* s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s2[i] - s1[i] < 0)
		return (0);
	else
		return (1);
}

int	main(void)
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
	a.data = "b";
	a2.data = "8";
	b.data = "a";
	b2.data = "1";
	ft_sorted_list_merge(&beg, beg2, cmp);
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
