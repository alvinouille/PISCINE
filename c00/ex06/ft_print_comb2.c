/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:38:52 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/07 19:37:00 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_nb(char nba, char nbb, char nbc, char nbd)
{
	while (nbd <= '9')
	{	
		ft_putchar(nba);
		ft_putchar(nbb);
		ft_putchar(' ');
		ft_putchar(nbc);
		ft_putchar(nbd);
		if (!(nba == '9' && nbb == '8' && nbc == '9' && nbd == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		nbd++;
	}
}

void	ft_loop(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_print_nb(a, b, c, d);
				c++;
				d = '0';
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = '0';
		c = a;
		d = '1';
	}
}

void	ft_print_comb2(void)
{
	char	nb1;
	char	nb2;
	char	nb3;
	char	nb4;

	nb1 = '0';
	nb2 = '0';
	nb3 = '0';
	nb4 = '1';
	ft_loop(nb1, nb2, nb3, nb4);
}
