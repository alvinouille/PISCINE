/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:36:41 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/13 18:35:06 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strsize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '\0' || str[1] == '\0')
			return (0);
		i++;
	}
	return (i);
}

int	ft_is_printable(unsigned char c)
{
	if (c < 32 || c >= 127)
		return (0);
	else
		return (1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (ft_is_printable(base[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			sizebase;

	n = nbr;
	sizebase = ft_strsize(base);
	if (sizebase == 0)
		return ;
	if (ft_check_base(base) == 0)
		return ;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > (sizebase - 1))
	{
		ft_putnbr_base((n / sizebase), base);
		ft_putchar(base[n % sizebase]);
	}
	if (n <= (sizebase -1))
		ft_putchar(base[n]);
}
