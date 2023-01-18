/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:20:53 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/26 22:21:05 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

int	ft_check_base(char *base);
int	ft_is_in_base(char c, char *base);
int	ft_base_to_dec(char c, char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	if (n == 0)
	{
		i = 1;
		return (i);
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		y;
	char	*tmp;

	y = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (tmp == NULL)
		return (0);
	i--;
	while (i >= 0)
	{
		tmp[y] = str[i];
		i--;
		y++;
	}
	tmp[y] = '\0';
	return (tmp);
}

char	*ft_itoa_base(long int n, int base, char *alpha)
{
	char	*str;
	int		i;
	int		is_negative;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = n * (-1);
	}
	i = 0;
	str = (char *)malloc(sizeof(str) * (ft_count(n) + 1 + is_negative));
	if (str == NULL)
		return (0);
	if (n == 0)
		str[0] = alpha[0];
	while (n > 0)
	{
		str[i++] = alpha[n % base];
		n = n / base;
	}
	if (is_negative == 1)
		str[i] = '-';
	str[++i] = '\0';
	return (ft_strrev(str));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	tmp;

	if (nbr == 0)
		return (NULL);
	if (ft_check_base(base_to) == 0)
		return (NULL);
	tmp = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(tmp, ft_strlen(base_to), base_to));
}
/*
int	main(int ac, char **av)
{
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
	return(0);
} */
