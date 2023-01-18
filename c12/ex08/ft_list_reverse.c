/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lol.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:17:55 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/27 14:26:03 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*elem;
	t_list	*prev;
	t_list	*suiv;

	elem = *begin_list;
	prev = 0;
	suiv = 0;
	while (elem)
	{
		suiv = elem->next;
		elem->next = prev;
		prev = elem;
		elem = suiv;
	}
	*begin_list = prev;
}
/*
int	main(void)
{
	t_list *beg;
	t_list a;
	t_list b;
	t_list c;
	t_list d;
	t_list e;

	beg = &a;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = 0;
	a.data = "a";
	b.data = "b";
	c.data = "c";
	d.data = "d";
	e.data = "e";
	ft_list_reverse(&beg);
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
