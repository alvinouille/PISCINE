/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:52:49 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:28:19 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

/* void	truc(void *str)
{
	int i = 0;
	char *test = (char *) str;
	printf("%s\n", test);
	test[i] += 1;
}

int	main(void)
{
	t_list *beg;
	t_list a;
	t_list b;

	beg = &a;
	a.next = &b;
	b.next = 0;
	a.data = "a";
	b.data = "b";
	
	ft_list_foreach(beg, truc);
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
