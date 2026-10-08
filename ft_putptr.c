/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalrjoub <nalrjoub@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:44:57 by nalrjoub          #+#    #+#             */
/*   Updated: 2026/10/08 10:44:59 by nalrjoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int	ft_putptr(unsigned long n)
{
	if (!n)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x") + ft_puthexa('x', n));
}
