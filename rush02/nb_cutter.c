/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   nb_cutter.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: mtorgue <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/23 15:56:01 by mtorgue	       #+#    #+#	      */
/*   Updated: 2022/07/24 22:58:14 by ale-sain         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

char	**ft_parse_for_teen(char *nombre, char **tableau)
{
	int	i;
	int	nb;

	i = ft_strlen(*nombre) - 1;
	nb = i;
	if (nombre[i - 1] == '1')
	{
		tableau[0][0] = nombre[i];
		tableau[0][1] = nombre[i - 1];
	}
	if (nombre[i - 4] == '1')
	{
		tableau[6][0] = nombre[i - 3];
		tableau[6][1] = nombre[i - 4];
	}
	if (nombre[i - 7] == '1')
	{
		tableau[11][0] = nombre[i - 6];
		tableau[11][1] = nombre[i - 7];
	}
	return (tableau);
}

char	**ft_parsemain(char *nombre)
{	
	char	tableau[17][9];

	if (ft_strlen(nombre) > '1')
		ft_parse_first(nombre, tableau);
	if (ft_strlen(nombre) >= '6')
	{
		tableau[5][3] = '1';
		tableau[5][2] = '0';
		tableau[5][1] = '0';
		tableau[5][0] = '0';
		ft_parse_first(nombre, tableau);
	}
	if (ft_strlen(nombre) >= '9')
	{
		tableau[10][6] = '1';
		tableau[10][5] = '0';
		tableau[10][4] = '0';
		tableau[10][3] = '0';
		tableau[10][2] = '0';
		tableau[10][1] = '0';
		tableau[10][0] = '0';
		ft_parse_first(nombre, tableau);
	}
	return (tableau);
}

char	**ft_parse_first(char *nombre, char **tableau)
{
	int	i;
	int	nb;

	i = ft_strlen(*nombre) - 1;
	nb = i;
	if (nb >= 1 && nombre[i - 1] > '1')
		tableau[0][0] = nombre[i];
	if (nb >= 2 && nombre[i - 1] > '1')
	{
		tableau[1][0] = nombre[i - 1];
		tableau[1][1] = '0';
	}
	if (nb >= 3)
	{
		tableau[3][2] = '1';
		tableau[3][1] = '0';
		tableau[3][0] = '0';
	}
	if (nb >= 3)
		tableau[4][0] = nombre[i - 2];
	return (tableau);
}

char	**ft_parse_2(char *nombre, char **tableau)
{
	int	i;
	int	nb;

	i = ft_strlen(*nombre) - 1;
	nb = i;
	if (nb >= 4 && nombre[i - 4] > 1)
		tableau[6][0] = nombre[i - 3];
	if (nb >= 5 && nombre[i - 4] > 1)
	{
		tableau[7][0] = nombre[i - 4];
		tableau[7][1] = '0';
	}
	if (nb >= 6)
	{
		tableau[8][2] = '1';
		tableau[8][1] = '0';
		tableau[8][0] = '0';
	}
	if (nb >= 6)
		tableau[9][0] = nombre[i - 5];
	return (tableau);
}

char	**ft_parse_3(char *nombre, char **tableau)
{
	int	i;
	int	nb;

	i = ft_strlen(*nombre) - 1;
	nb = i;
	if (nb >= 7 && nombre[i - 7] > 1)
		tableau[11][0] = nombre[i - 6];
	if (nb >= 8 && nombre[i - 7] > 1)
	{
		tableau[12][0] = nombre[i - 7];
		tableau[12][1] = '0';
	}
	if (nb >= 9)
	{
		tableau[13][2] = '1';
		tableau[13][1] = '0';
		tableau[13][0] = '0';
	}
	if (nb >= 9)
		tableau[14][0] = nombre[i - 8];
	return (tableau);
}
