/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:20:03 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/26 22:20:13 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+'
			|| base[i] == '\t' || base[i] == '\v'
			|| base[i] == '\r' || base[i] == '\n'
			|| base[i] == '\f' || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_base_to_dec(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	len;

	len = ft_check_base(base);
	if (len < 2)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || (*str == ' '))
		str++;
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	result = 0;
	while (ft_is_in_base(*str, base) && *str)
	{
		result = (result * len) + (ft_base_to_dec(*str, base));
		str++;
	}
	return (result * sign);
}
