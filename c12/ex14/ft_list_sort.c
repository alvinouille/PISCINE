/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:55:48 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:31:52 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
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
/*int	cmp(char *s1, char* s2)
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
	t_list a;
	t_list b;
	t_list c;

	beg = &a;
	a.next = &b;
	b.next = &c;
	c.next = 0;
	a.data = "a";
	b.data = "b";
	c.data = "a";
	ft_list_sort(&beg, cmp);
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
