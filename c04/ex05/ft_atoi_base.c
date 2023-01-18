/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: ale-sain <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/11 15:53:08 by ale-sain	       #+#    #+#	      */
/*   Updated: 2022/07/13 19:23:58 by ale-sain         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

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

int	ft_conv_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i])
		i++;
	if (c == base[i])
		return (i);
	else
		return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == ' ' || base[i] == '\t' || base[i] == '\v'
			|| base[i] == '\n' || base[i] == '\f' || base[i] == '\r')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_calcul_nb(char *str, char *base, int i, int sizebase)
{
	int	nb;

	nb = 0;
	if ((ft_is_in_base(str[i], base)) == 0)
		return (0);
	else
	{
		while ((ft_is_in_base(str[i], base)) == 1)
		{
			nb = nb * sizebase + (ft_conv_nb(str[i], base));
			i++;
		}
	}
	return (nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sizebase;
	int	neg;

	i = 0;
	neg = 1;
	sizebase = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[sizebase])
		sizebase++;
	if (ft_check_base(base) == 0)
		return (0);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= (-1);
		i++;
	}
	return ((ft_calcul_nb(str, base, i, sizebase)) * (neg));
}
