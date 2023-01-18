/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:38:09 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/17 16:38:40 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

/*checks at the end of each line whether 
the line is correct according to the given clue*/
int	valid_clues_horizontal(char **tab, char *pov, int pos)
{
	if (pos == 3 || pos == 7 || pos == 11 || pos == 15)
	{
		if (ft_check_lr(tab, pov, pos / 4) && ft_check_rl(tab, pov, pos / 4))
			return (1);
		else
			return (0);
	}
	return (1);
}

/*checks at the end of each column whether the column 
is correct according to the given clue*/
int	valid_clues_vertical(char **tab, char *pov, int pos)
{
	if (pos == 12 || pos == 13 || pos == 14 || pos == 15)
	{
		if (ft_check_tb(tab, pov, pos % 4) && ft_check_bt(tab, pov, pos % 4))
			return (1);
		else
			return (0);
	}
	return (1);
}
