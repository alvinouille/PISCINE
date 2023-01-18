/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 11:03:34 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/12 20:04:27 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	else
		return (1);
}

int	ft_is_numeric(char c)
{
	if ((c < 48) || (c > 57))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
				str[i] += 32;
		i++;
	}
	i = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] -= 32;
		i++;
	}
	while (str[i])
	{
		if ((ft_is_alpha(str[i]) == 0) && (ft_is_numeric(str[i]) == 0)
			&& (ft_is_alpha(str[i + 1]) == 1))
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
