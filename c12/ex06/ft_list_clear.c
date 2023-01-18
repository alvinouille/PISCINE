/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 08:51:35 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:29:20 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void*))
{
	t_list	*element;
	t_list	*todel;

	element = begin_list;
	if (!element)
		return ;
	while (element)
	{
		free_fct(element->data);
		todel = element;
		element = element->next;
		free(todel);
	}
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
	ft_list_clear(&beg, (*free_fct(char*));
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
