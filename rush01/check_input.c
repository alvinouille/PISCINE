/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapellet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:45:09 by mapellet          #+#    #+#             */
/*   Updated: 2022/07/17 16:56:13 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib_rush.h"

/*checks whether there are't the same
two consecutive spaces*/
int	ft_last_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[j])
	{
		if (str[i] == str[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

/*checks if the input corresponds to the
characters allowed in the table (no consecutive
spaces for instance)*/
int	check_input(char *input)
{
	int	index;
	int	counter;

	index = -1;
	counter = 0;
	while (input[++index] != '\0')
	{
		if (input[index] >= '1' && input[index] <= '4')
			counter++;
	}
	index = 0;
	if (input[index] == ' ')
		return (0);
	while (input[index] != '\0')
	{
		if ((input[index] != ' ') && (input[index] < '1' && input[index] > '4'))
			return (0);
	index++;
	}
	if (ft_last_check(input) == 0)
		return (0);
	if (input[index - 1] == ' ' || counter != 16)
		return (0);
	else
		return (counter);
}

/*checks if the input sent corresponds to the size of the table*/
char	*clean_input(char *input, int counter)
{
	char	*c_input;
	int		index;
	int		jindex;

	c_input = (char *)malloc(sizeof(char) * (counter + 1));
	index = 0;
	jindex = 0;
	while (counter != 0)
	{
		if (input[jindex] == ' ')
			jindex++;
		else
		{
			c_input[index] = input[jindex];
			counter--;
			index++;
			jindex++;
		}
	}
	c_input[index + 1] = '\0';
	return (c_input);
}
