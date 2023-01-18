/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:42:17 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/17 17:19:15 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

//frees up tab once it is considered wrong
void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (i <= 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

// ?
int	ft_checks(int ac, char **av)
{
	if (ac != 2)
	{
		ft_print_error();
		return (0);
	}
	if (check_input(av[1]) == 0)
	{
		ft_print_error();
		return (0);
	}
	else
		return (1);
}

int	main(int ac, char **av)
{
	char	**tab;
	char	*cleaned_input;

	if (ft_checks(ac, av) == 0)
		return (0);
	cleaned_input = clean_input(av[1], check_input(av[1]));
	tab = ft_tab_init();
	if (is_valid(tab, 0, cleaned_input))
	{
		ft_display_tab(tab);
		ft_free(tab);
		free(cleaned_input);
		return (0);
	}
	else
	{
		ft_print_error();
		ft_free(tab);
		free(cleaned_input);
		return (0);
	}
}
