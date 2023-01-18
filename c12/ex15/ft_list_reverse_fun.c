/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:38:23 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:44:20 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*element;

	i = 0;
	element = begin_list;
	while (i != nbr && (element))
	{
		element = element->next;
		i++;
	}
	if (i == nbr)
		return (element);
	else
		return (0);
}

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 0;
	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	ft_swap(t_list **start, t_list **end)
{
	int	*tmp;

	tmp = (*start)->data;
	(*start)->data = (*end)->data;
	(*end)->data = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	unsigned int	end;
	unsigned int	start;
	unsigned int	size;
	t_list			*dernier;
	t_list			*premier;

	start = 0;
	size = ft_list_size(begin_list);
	end = size - 1;
	while ((start < (size / 2)))
	{
		premier = ft_list_at(begin_list, start);
		dernier = ft_list_at(begin_list, end - start);
		ft_swap(&premier, &dernier);
		start++;
	}
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
	ft_list_reverse_fun(beg);
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
