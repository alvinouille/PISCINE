/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   nb_cutter2.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: keferrei <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2022/07/24 16:02:04 by keferrei	       #+#    #+#	      */
/*   Updated: 2022/07/24 16:16:11 by keferrei         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

char	ft_parse_4(char *nombre, char tableau[17][9])
{
	int	i;
	int	nb;

	i = ft_strlen(*nombre) - 1;
	nb = i;
	if (nb >= 10)
	{
		tableau[15][9] = '1';
		tableau[15][8] = '0';
		tableau[15][7] = '0';
		tableau[15][6] = '0';
		tableau[15][5] = '0';
		tableau[15][4] = '0';
		tableau[15][3] = '0';
		tableau[15][2] = '0';
		tableau[15][1] = '0';
		tableau[15][0] = '0';
	}
	if (nb >= 10)
		tableau[15][0] = nombre[i - 9];
}
