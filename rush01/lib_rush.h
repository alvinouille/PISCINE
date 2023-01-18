/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_rush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:04:15 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/17 15:24:24 by mapellet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_RUSH_H
# define LIB_RUSH_H

# include <stdlib.h>
# include <unistd.h>

int			check_input(char *input);
char		*clean_input(char *input, int counter);
int			is_valid(char **tab, int pos, char *pov);
int			ft_lin_ok(char **tab, char k, int y);
int			ft_col_ok(char **tab, char k, int x);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_display_tab(char **tab);
char		**ft_tab_init(void);
int			ft_check_tb(char **tab, char *pov, int x);
int			ft_check_bt(char **tab, char *pov, int x);
int			ft_check_lr(char **tab, char *pov, int y);
int			ft_check_rl(char **tab, char *pov, int y);
void		ft_print_error(void);
int			valid_clues_vertical(char **tab, char *pov, int pos);
int			valid_clues_horizontal(char **tab, char *pov, int pos);

#endif
