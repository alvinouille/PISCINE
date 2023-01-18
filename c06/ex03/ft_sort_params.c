/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:53:01 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/13 12:10:00 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s2[i] - s1[i]);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i <= (argc - 1))
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	i = 1;
	tmp = 0;
	if (argc <= 0)
		return (0);
	while (i <= (argc -2))
	{
		if (ft_strcmp(argv[i], argv[i + 1]) >= 0)
			i++;
		else
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 1;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
