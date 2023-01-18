/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 08:35:03 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/18 15:50:35 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		(*range) = NULL;
		return (0);
	}
	tab = malloc (sizeof(int) * size);
	if (!(tab))
		return (-1);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	(*range) = tab;
	return (i);
}
