/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:01:01 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/18 15:19:27 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

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
	dest = malloc (sizeof(char) * sizesrc);
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
