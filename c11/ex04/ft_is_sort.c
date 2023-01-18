/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:17:29 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/27 00:19:06 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_tab(int *tab, int length, int i, int (*f)(int, int))
{
	while (i < (length - 1))
	{
		if (((*f)(tab[i], tab[i + 1])) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ordre;

	i = 0;
	if (length == 0)
		return (1);
	if (length == 1)
		return (1);
	if ((*f)(tab[i], tab[i + 1]) > 0)
		ordre = 1;
	if ((*f)(tab[i], tab[i + 1]) < 0)
		ordre = -1;
	while (i < length -1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0 && ordre == 1)
			return (0);
		if ((*f)(tab[i], tab[i + 1]) > 0 && ordre == -1)
			return (0);
		i++;
	}
	return (1);
}
/*
int	cmp(int a, int b)
{
	return (a - b);
}
 #include <stdio.h>
int main()
{
	int tab[5] = {5, 0, 0, -90, -90};
	printf("%d\n", ft_is_sort(tab, 5, cmp));
} */
