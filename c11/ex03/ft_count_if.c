/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:13:59 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/24 13:15:29 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	compt;

	i = 0;
	compt = 0;
	while (i < length)
	{
		if (((*f)(tab[i])) != 0)
			compt++;
		i++;
	}
	return (compt);
}
