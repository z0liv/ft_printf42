/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:07:00 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/19 15:26:14 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_mem(size_t n)
{
	int	counter;

	counter = 0;
	if (n >= 16)
		counter += ft_puthex_mem(n / 16);
	if (n % 16 >= 10)
		counter += ft_putchar(n % 16 + 'a' - 10);
	else
		counter += ft_putchar(n % 16 + '0');
	return (counter);
}

int	ft_putmem(long int ptr)
{
	int		counter;

	counter = 0;
	if (ptr)
	{
		counter = write(1, "0x", 2);
		counter += ft_puthex_mem(ptr);
	}
	else
		counter = ft_putstr("(nil)");
	return (counter);
}
