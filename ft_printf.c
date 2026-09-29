/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:15:17 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/29 16:16:12 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "libftprintf.h"

void	ft_printf(char *s, ...)
{
	va_list	args;

	va_start(args, s);
	while (s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'd' || *s == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (*s == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (*s == 'c')
				ft_putchar_fd((char)va_arg(args, int), 1);
			else if (*s == '%')
				ft_putchar_fd('%', 1);
			else if (*s == 'x' || *s == 'X' || *s == 'p')
				ft_printhexa(*s, va_arg(args, int));
			else if (*s == 'u')
				ft_printunsigned(va_arg(args, unsigned int));
		}
		ft_putchar_fd(*s, 1);
		s++;
	}
}
