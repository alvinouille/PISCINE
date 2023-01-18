/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LIB_RUSH.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorgue <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:05:17 by mtorgue           #+#    #+#             */
/*   Updated: 2022/07/24 22:32:23 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_RUSH_H
# define LIB_RUSH_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_check_number(char *str);
int	ft_check_line(char *str);
int	check_dictionnary(char *str);
void	dict_error(void);
int	ft_atoi(char *str);
int	ft_len(unsigned int nb);
char	*ft_write_str(char *str, unsigned int nb);
char	*ft_itoa(unsigned int nb);
int	ft_is_sep(char c, char *charset);
int	ft_count_words(char *str, char *charset);
int	ft_create_elem(char **tab, char *charset, char *str, int j);
char	**ft_create_tab(void);
char	**ft_split(char *str, char *charset);
int	ft_open_dictionnary(char *file_name);
char	*ft_return_dictionnary(int nb_char, char *file_name);
int	ft_main2(char *dictionnary, unsigned int nb);
void	ft_main3(char **dict_tab, char **nb_tab, int *nb_line);
char	ft_parse_for_teen(char *nombre, char tableau[17][9]);
char	ft_parsemain(char *nombre);
char	ft_parse_first(char *nombre, char tableau[17][9]);
char	ft_parse_2(char *nombre, char tableau[17][9]);
char	ft_parse_3(char *nombre, char tableau[17][9]);
char	ft_parse_4(char *nombre, char tableau[17][9]);
void	print_words(char *str);
char	*ft_strstr(char *str, char *to_find);
int	search_str_in_tab(char **tab, char *str);

#endif
