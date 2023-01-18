/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:47:38 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/17 17:15:32 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

//prints the error message
void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

//initializes a double entry table
char	**ft_tab_init(void)
{
	char	**tab;
	int		i;
	int		j;

	j = 0;
	i = 0;
	tab = malloc (sizeof (char *) * 5);
	while (i <= 4)
	{
		tab[i] = malloc(sizeof (char) * 5);
		while (j < 4)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
	return (tab);
}

//displays a character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//displays a string of character
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		if (i != 3)
			ft_putchar(' ');
		i++;
	}
}

//displays the character in the table
void	ft_display_tab(char **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		ft_putstr(tab[i]);
		if (i != 3)
			ft_putchar('\n');
		i++;
	}
}
