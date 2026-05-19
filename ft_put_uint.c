/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_uint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:43:20 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/19 13:02:09 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_uint(int n)
{
	unsigned int	nbr;
	unsigned int	counter;

	nbr = (unsigned)n;
	counter = 0;
	if (nbr >= 10)
	{
		counter = counter + ft_putnbr(nbr / 10);
		counter = counter + ft_putchar(nbr % 10 + '0');
	}
	else
		counter = counter + ft_putchar(nbr + '0');
	return (counter);
}
