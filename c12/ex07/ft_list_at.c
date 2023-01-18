/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:29:52 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:47:14 by ale-sain         ###   ########.fr       */
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

/* int	main(void)
{
	t_list *beg;
	t_list a;
	t_list b;
	t_list *list;

	beg = &a;
	a.next = &b;
	b.next = 0;
	a.data = "a";
	b.data = "b";
	list = ft_list_at(&beg, 1);
	printf("%s\n", (char *)list->data);
} */
