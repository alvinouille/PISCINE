/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 07:44:09 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/19 11:42:32 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		sizesrc;
	int		i;

	sizesrc = 0;
	dest = 0;
	i = 0;
	while (src[sizesrc])
		sizesrc++;
	dest = malloc (sizeof(char) * (sizesrc + 1));
	if (dest != 0)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (0);
}

t_stock_str	ft_create_struct(char *str)
{
	t_stock_str	stc;

	stc.size = ft_strlen(str);
	stc.str = str;
	stc.copy = ft_strdup(str);
	return (stc);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **argv)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab != 0)
	{
		while (i < ac)
		{
			tab[i] = ft_create_struct(argv[i]);
			i++;
		}
		tab[i].size = 0;
		tab[i].str = 0;
		tab[i].copy = 0;
		return (tab);
	}
	return (0);
}
