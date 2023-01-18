/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:51:07 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/17 17:16:11 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

/* verifies from top to bottom
each filled case, so as to check
in the end thanks to the counter
whether the clue corresponds to 
what is written in the filled cases*/
int	ft_check_tb(char **tab, char *pov, int x)
{
	int		y;
	char	counter;
	char	max_h;

	y = 0;
	counter = '0';
	max_h = '0';
	while (y <= 3)
	{
		if (tab[y][x] >= max_h)
		{
			counter += 1;
			max_h = tab[y][x];
		}
		y++;
	}
	if (counter != pov[x])
		return (0);
	return (1);
}

//verifies from bottom to top
int	ft_check_bt(char **tab, char *pov, int x)
{
	int		y;
	char	counter;
	char	max_h;

	y = 3;
	counter = '0';
	max_h = '0';
	while (y >= 0)
	{
		if (tab[y][x] >= max_h)
		{
			counter += 1;
			max_h = tab[y][x];
		}
		y--;
	}
	if (counter != pov[x + 4])
		return (0);
	return (1);
}

//verifies from left to right
int	ft_check_lr(char **tab, char *pov, int y)
{
	int		x;
	char	counter;
	char	max_h;

	x = 0;
	counter = '0';
	max_h = '0';
	while (x <= 3)
	{
		if (tab[y][x] >= max_h)
		{
			counter += 1;
			max_h = tab[y][x];
		}
		x++;
	}
	if (counter != pov[y + 8])
		return (0);
	return (1);
}

//verifies from right to left
int	ft_check_rl(char **tab, char *pov, int y)
{
	int		x;
	char	counter;
	char	max_h;

	x = 3;
	counter = '0';
	max_h = '0';
	while (x >= 0)
	{
		if (tab[y][x] >= max_h)
		{
			counter += 1;
			max_h = tab[y][x];
		}
		x--;
	}
	if (counter != pov[y + 12])
		return (0);
	return (1);
}
