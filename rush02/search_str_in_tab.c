/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_str_in_tab.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:46:08 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/23 16:38:47 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] == to_find[i] && to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (1);
		}
		str++;
	}
	return (0);
}

int	search_str_in_tab(char **tab, char *str)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (ft_strstr(tab[i], str) == 1)
			return (i);
		i++;
	}
	return (0);
}

