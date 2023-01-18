/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: ale-sain <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/19 08:19:23 by ale-sain	       #+#    #+#	      */
/*   Updated: 2022/07/19 11:48:37 by ale-sain         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar('-');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}

/*int	main(int argc, char **argv)
{ 
	ft_show_tab(ft_strs_to_tab(argc, argv));
	return (0);
} */
