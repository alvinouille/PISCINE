/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:42:31 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:38:41 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list;

	list = begin_list;
	while (list->next)
		list = list->next;
	return (list);
}

/*int	main(void)
{
	t_list *beg;
	t_list a;
	t_list b;
	t_list *result;

	beg = &a;
	a.next = &b;
	b.next = 0;
	a.data = "a";
	b.data = "b";
	result = ft_list_last(beg);
	printf("%s\n", (char *)(*result).data);
} */
