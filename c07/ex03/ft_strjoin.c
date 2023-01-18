/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: ale-sain <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/14 08:44:18 by ale-sain	       #+#    #+#	      */
/*   Updated: 2022/07/21 19:00:03 by ale-sain         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_dest(int size, char **strs, char *sep)
{
	int	i;
	int	sizedest;

	i = 0;
	sizedest = 0;
	while (i < size)
	{
		sizedest = sizedest + ft_strlen(strs[i++]);
		if (i < size)
			sizedest += ft_strlen(sep);
	}
	return (sizedest + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	dest = 0;
	i = 0;
	if (size == 0)
	{
		dest = malloc(sizeof(char) * 1);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc (sizeof(char) * (ft_strlen_dest(size, strs, sep)));
	if (!dest)
		return (0);
	dest[0] = '\0';
	while (i < size)
	{
		ft_strcat(dest, strs[i++]);
		if (i < size)
			ft_strcat(dest, sep);
	}
	return (dest);
}
/* #include <stdio.h>
int main()
{
	printf("%s\n", ft_strjoin(0, NULL, "_"));
} */
