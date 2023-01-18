/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:46:52 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/24 16:10:42 by keferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (c != charset[i] && charset[i])
		i++;
	if (c == charset[i])
		return (1);
	else
		return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	nbwords;

	i = 1;
	nbwords = 0;
	if (ft_is_sep(str[0], charset) == 0)
		nbwords = 1;
	while (str[i])
	{
		if (ft_is_sep(str[i - 1], charset) == 1
			&& ft_is_sep(str[i], charset) == 0)
			nbwords++;
		i++;
	}
	return (nbwords);
}

int	ft_create_elem(char **tab, char *charset, char *str, int j)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i] && ft_is_sep(str[i], charset) == 0)
		i++;
	tab[j] = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && ft_is_sep(str[i], charset) == 0)
	{
		tab[j][k] = str[i];
		i++;
		k++;
	}
	tab[j][k] = '\0';
	j++;
	return (j);
}

char	**ft_create_tab(void)
{
	char	**tab;

	tab = malloc(sizeof(char *) * 1);
	tab[0] = '\0';
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	j = 0;
	i = 1;
	if (ft_count_words(str, charset) == 0 || (!str))
		return (ft_create_tab());
	tab = malloc (sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (ft_is_sep(str[0], charset) == 0)
	{
		j = ft_create_elem(tab, charset, &str[0], j);
	}
	while (str[i])
	{
		if (ft_is_sep(str[i -1], charset) == 1
			&& ft_is_sep(str[i], charset) == 0)
		{
			j = ft_create_elem(tab, charset, &str[i], j);
		}
		i++;
	}
	tab[j] = 0;
	return (tab);
}
