/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:49:23 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/17 17:17:14 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

//checks if the whole table is valid at the end
int	is_valid(char **tab, int pos, char *pov)
{
	char	k;

	if (pos == 16)
		return (1);
	k = '1';
	while (k <= '4')
	{
		if (ft_col_ok(tab, k, pos % 4) && ft_lin_ok(tab, k, pos / 4))
		{
			tab[pos / 4][pos % 4] = k;
			if (valid_clues_vertical(tab, pov, pos) == 0
				|| valid_clues_horizontal(tab, pov, pos) == 0)
			{
				tab[pos / 4][pos % 4] = '0';
				return (0);
			}
			if (is_valid(tab, pos + 1, pov))
				return (1);
		}
		k++;
	}
	tab[pos / 4][pos % 4] = '0';
	return (0);
}
