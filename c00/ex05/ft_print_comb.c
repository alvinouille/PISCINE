/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:25:29 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/06 18:42:15 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nb(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (!((a == '7') && (b == '8') && (c == '9')))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	nb;
	char	nb1;
	char	nb2;

	nb = '0';
	while (nb <= '7')
	{
		nb1 = nb + 1;
		while (nb1 <= '8')
		{	
			nb2 = nb1 + 1;
			while (nb2 <= '9')
			{
				ft_print_nb(nb, nb1, nb2);
				nb2++;
			}
			nb1++;
		}
		nb++;
	}
}

int main()
{
	ft_print_comb();
}
