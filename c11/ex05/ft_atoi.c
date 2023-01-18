/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:16:36 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/13 18:17:12 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(char *str)
{
	int			i;
	long int	nb;
	int			neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{		
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * (neg));
}
