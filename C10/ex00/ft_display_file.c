/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:27:36 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 18:43:21 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "header.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_display_file(char *file_name)
{
	char	buf[1];
	int	file_num;
	int	end;

	end = 1;
	file_num = open(file_name);
	if (file_num != 0)
	{
		while (end != 0)
		{
			end = read(file_num, buf, 1);
			ft_putchar(buf);
		}
	}
	else
		return (0);
	close(file_name);
	return (1);
}

int	main(int ac, char **av)
{
	int	stop;

	if (ac == 2)
	{
		stop = ft_display_file(av[1]);
		if (stop == 0)
		{
			ft_putstr("Cannot read file.\n");
			return(0);
		}
	}
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_putstr("File name missing.\n");
	return (0);
}
