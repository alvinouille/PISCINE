/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-sain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:30:04 by ale-sain          #+#    #+#             */
/*   Updated: 2022/07/25 22:25:39 by ale-sain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int		add(int a, int b);
int		sous(int a, int b);
int		mult(int a, int b);
int		div(int a, int b);
int		modulo(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif
