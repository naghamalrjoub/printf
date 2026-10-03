/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:10:43 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/09/30 15:10:44 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunsigned(unsigned int n)
{
	char	c;
	int		counter;

	counter = 0;
	if (n >= 10)
		counter += ft_putunsigned(n / 10);
	c = n % 10 + '0';
	counter += ft_putchar(c);
	return (counter);
}
