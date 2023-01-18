/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_lin_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:35:59 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/17 17:10:11 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

/*checks if each line is different from each other*/
int	ft_lin_ok(char **tab, char k, int y)
{
	int	x;

	x = 0;
	while (x <= 3)
	{
		if (k == tab[y][x])
			return (0);
		x++;
	}
	return (1);
}

/*checks if each column is different from each other*/
int	ft_col_ok(char **tab, char k, int x)
{
	int	y;

	y = 0;
	while (y <= 3)
	{
		if (k == tab[y][x])
			return (0);
		y++;
	}
	return (1);
}
