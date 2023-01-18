/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:54:49 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 19:42:41 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*elem;
	t_list	*begin_list;

	if (size == 0)
		return (0);
	i = 1;
	begin_list = ft_create_elem(strs[0]);
	while (i < size)
	{
		elem = ft_create_elem(strs[i]);
		elem->next = begin_list;
		begin_list = elem;
		i++;
	}
	return (begin_list);
}
/* int	main(int ac, char **av)
{
	t_list *beg;
	beg = ft_list_push_strs(ac, av);
	while (beg)
	{
		printf("%s\n", (char *)beg->data);
		beg = beg->next;
	}
} */
