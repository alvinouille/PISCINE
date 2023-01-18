/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 09:59:34 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/10 13:42:37 by elehmime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_write_first_line(int i, int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_putchar('/');
	i = 1;
	while (i <= (x - 1))
	{
		if (i == (x - 1))
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void	ft_write_last_line(int i, int x)
{
	while (i <= (x - 1))
	{
		if (i == (x - 1))
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
}

void	ft_write_last_column(int a, int x)
{
	while (a <= (x - 1))
	{
		if (a == (x - 1))
			ft_putchar('*');
		else
			ft_putchar(' ');
		a++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	a;

	i = 1;
	a = 1;
	ft_write_first_line(i, x, y);
	i = 1;
	ft_putchar('\n');
	while (i <= (y - 1))
	{
		if (i == (y - 1))
			ft_putchar('\\');
		else
		{
			ft_putchar('*');
			ft_write_last_column(a, x);
			a = 1;
			ft_putchar('\n');
		}
		i++;
	}
	i = 1;
	ft_write_last_line(i, x);
}
