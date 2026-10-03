/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:23:03 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/30 11:23:31 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthexa(char c, unsigned long n)
{
	char	*sc;
	char	*s;
	int		count;

	count = 0;
	s = "0123456789abcdef";
	sc = "0123456789ABCDEF";
	if (c == 'p' && !n)
		return (ft_putstr("(nil)"));
	if (n > 15)
	{
		if (c == 'x' || c == 'p')
			count += ft_puthexa(c, n / 16);
		else
			count += ft_puthexa(c, n / 16);
	}
	if (c == 'x' || c == 'p')
		count += ft_putchar(s[n % 16]);
	else
		count += ft_putchar(sc[n % 16]);
	return (count);
}
