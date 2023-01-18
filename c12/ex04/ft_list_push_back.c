/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:46:52 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:45:43 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*new;
	t_list	*suiv;

	new = ft_create_elem(data);
	if (*begin_list == 0)
	{
		*begin_list = new;
		return ;
	}
	elem = *begin_list;
	while (elem)
	{
		suiv = elem;
		elem = elem->next;
	}
	suiv->next = new;
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
	ft_list_push_back(&beg, "derniere");
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
