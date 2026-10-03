/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:15:17 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/10/03 12:33:18 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	handler(char format, va_list args)
{
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (format == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'x' || format == 'X')
		return (ft_puthexa(format, (unsigned long)va_arg(args, unsigned int)));
	else if (format == 'p')
		return (ft_puthexa(format, (unsigned long)va_arg(args, void *)));
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	return (-1);
}

int	ft_printf(char *s, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += handler(s[i], args);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (count);
}
