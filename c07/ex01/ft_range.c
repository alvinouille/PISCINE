/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:26:48 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/18 15:53:01 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc (sizeof(int) * size);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
