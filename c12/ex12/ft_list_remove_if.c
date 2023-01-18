/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_autrefct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 10:50:19 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/27 12:35:14 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include "ft_list.h"

void	delete_list(t_list *prev, t_list *curr, void (*free_fct)(void*))
{
	if (prev)
		prev->next = curr->next;
	free_fct(curr->data);
	free(curr);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(),
		void (*free_fct)(void*))
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	if (begin_list == NULL)
		return ;
	prev = NULL;
	curr = *begin_list;
	while (curr)
	{
		next = curr->next;
		if (cmp(curr->data, data_ref) == 0)
			delete_list(prev, curr, free_fct);
		else
		{
			if (prev == NULL)
				*begin_list = curr;
			prev = curr;
		}
		curr = next;
	}
	if (prev == NULL)
		*begin_list = NULL;
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*ll;

	ll = malloc(sizeof(t_list));
	ll->data = data;
	ll->next = NULL;
	return (ll);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin_list;

	i = 0;
	begin_list = NULL;
	while (i < size)
	{
		ft_list_push_front(&begin_list, strs[i]);
		i++;
	}
	return (begin_list);
}

void    display_list(t_list *ll)
{
	while (ll)
	{
		printf("%s -> ", (char *) (ll->data));
		ll = ll->next;
	}
	printf("NULL\n");
	return ;
}

void	free_fct(void *a)
{
	(void) a;
}

int	cmp(char *s1, char *s2)
{
	return s1[0] == s2[0] ? 0 : 1;
}

int     main(int argc, char **argv)
{
	t_list  *ll = ft_list_push_strs(argc - 1, argv + 1);
	display_list(ll);
	ft_list_remove_if(&ll, "pouet", &cmp, &free_fct);
	display_list(ll);
} */
