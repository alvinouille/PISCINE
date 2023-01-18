/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:35:10 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 22:16:31 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_operation(int a, int b, char c)
{	
	if (c == '+')
		ft_putnbr(add(a, b));
	if (c == '-')
		ft_putnbr(sous(a, b));
	if (c == '*')
		ft_putnbr(mult(a, b));
	if (c == '/')
		ft_putnbr(div(a, b));
	if (c == '%')
		ft_putnbr(modulo(a, b));
}

int	ft_error(char op, int b)
{
	if (op == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero");
		ft_putchar('\n');
		return (0);
	}
	if (op == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		ft_putchar('\n');
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	if (av[2][0] != '-' && av[2][0] != '+' && av[2][0] != '/'
		&& av[2][0] != '*' && av[2][0] != '%')
	{
		ft_putchar('0');
		ft_putchar('\n');
		return (0);
	}	
	if (ft_error(av[2][0], b) == 0)
		return (0);
	ft_operation(a, b, av[2][0]);
	ft_putchar('\n');
	return (0);
}
