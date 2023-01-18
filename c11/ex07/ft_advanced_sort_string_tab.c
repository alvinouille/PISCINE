/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: ale-sain <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/24 13:31:50 by ale-sain	       #+#    #+#	      */
/*   Updated: 2022/07/25 22:40:19 by ale-sain         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{	
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i + 1] != 0)
	{	
		if (((*cmp)(tab[i], tab[i + 1])) > 0)
		{	
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/* int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	ft_advanced_sort_string_tab(av, cmp);
	int i = 0;
	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
} */
