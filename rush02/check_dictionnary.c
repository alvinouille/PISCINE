/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   check_dictionnary.c                                :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: ale-sain <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/23 17:06:36 by ale-sain	       #+#    #+#	      */
/*   Updated: 2022/07/24 22:30:43 by ale-sain         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include "header.h"

int	ft_check_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] != ' ' || str[i] != ':')
		return (0);
	else
		return (i);
}

int	ft_check_line(char *str)
{
	int	i;

	i = ft_check_number(str);
	if (i == 0)
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i] != ':')
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i] < 32 || str[i] >= 127)
		return (0);
	while (str[i] >= 32 && str[i] < 127)
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

int	check_dictionnary(char *str)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split(str, "\n");
	while (tab[i])
	{
		if (ft_check_line(tab[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
