/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:58:55 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/19 15:26:10 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
	{
		counter += ft_putchar('-');
		counter += ft_putchar('2');
		counter += ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		counter += ft_putchar('-');
		counter += ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		counter += ft_putnbr(n / 10);
		counter += ft_putchar(n % 10 + '0');
	}
	else
		counter += ft_putchar(n + '0');
	return (counter);
}
