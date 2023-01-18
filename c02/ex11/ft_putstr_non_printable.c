/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:03:00 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/12 20:26:42 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conv_hex(unsigned char nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_conv_hex(nb / 16);
		ft_conv_hex(nb % 16);
	}
	else
		ft_putchar(hex[nb]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) || (str[i] >= 127))
		{
			ft_putchar('\\');
			ft_conv_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
