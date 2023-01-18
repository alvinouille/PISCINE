/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 14:00:16 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/08 10:50:03 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
#include <unistd.h>

void	ft_putcar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putcar(str[i]);
		i++;
	}
}
