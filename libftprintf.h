/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:18:02 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/10/03 12:33:06 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putunsigned(unsigned int n);
int	ft_putstr(char *s);
int	ft_puthexa(char c, unsigned long n);

#endif
