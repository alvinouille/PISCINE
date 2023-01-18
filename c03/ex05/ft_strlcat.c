/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 08:49:18 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/12 21:19:59 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char*dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sizedest;
	unsigned int	sizesrc;

	i = 0;
	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dest);
	if (sizedest >= size)
		return (size + sizesrc);
	if (size == 0)
		return (sizesrc);
	while (src[i] && (i < (size - sizedest -1)))
	{
		dest[sizedest + i] = src[i];
		i++;
	}
	dest[sizedest + i] = '\0';
	return (sizedest + sizesrc);
}
