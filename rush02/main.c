/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:21:57 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/24 22:50:14 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
int	ft_open_dict(char *file_name)
{
	int	nb_char;
	char	buf[1];
	int	file_num;
	char	c;
	
	c = 1;
	buf[0] = 0;
	nb_char = 0;
	file_num = open(file_name);
	if (file_num != 0)
	{
		while (c != 0)
		{
			c = read(file_num, buf, 1);
			nb_char++;
		}
	}
	else
		return (0);
	close (file_num);
	return (nb_char);
}

char	*ft_return_d(int nb_char, char *file_name)
{
	char	*dict;
	int	file_num;
	
	if (nb_char == 0)
		return (0);
	file_num = open(file_name);
	dict = malloc(sizeof(char) * (nb_char + 1));
	if (dict != NULL)
	{
		read(file_num, dict, nb_char);
		dict[nb_char] = '\0';
	}
	close (file_num);
	return (dict);
}

int	main(int ac, char **av)
{
	unsigned int	nb;
	char	*d;
	
	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		d = ft_return_d(ft_open_dict("numbers.dict"), "numbers.dict");
	}
	else if (ac == 3)
	{
		nb = ft_atoi(av[2]);
		d = ft_return_d(ft_open_dict(av[1]), av[1]);
	}
	if (d == NULL || ft_main2(d, nb) == 0 || (ac != 3 && ac != 2))
	{
		dict_error();
		return (0);
	}
}

int	ft_main2(char *dictionnary, unsigned int nb)
{
	char	**dict_tab;
	char	**nb_tab;
	int	nb_line[17];
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	dict_tab = ft_split(dictionnary, "\n");
	if (check_dictionnary(dictionnary) == 0)
		return (0);
	nb_tab = ft_parsemain(ft_itoa(nb));
	while (nb_tab[i][0] != 'a')
	{
		if (search_str_in_tab(dict_tab, nb_tab[i]) == 0)
			return (0);
		if (search_str_in_tab(dict_tab, nb_tab[i]) > 0)
			nb_line[j++] = search_str_in_tab(dict_tab, nb_tab[i]);
		i++;
	}
	nb_line[j] = 0;
	ft_main3(dict_tab, nb_tab, nb_line);
	return (1);
}

void	ft_main3(char **dict_tab, char **nb_tab, int *nb_line)
{
	int	i;
	
	i = 0;
	while (nb_line[i] != 0)
	{
		print_words(dict_tab[nb_line[i]]);
		i++;
	}
}
