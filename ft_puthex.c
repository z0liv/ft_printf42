/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:24:47 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/19 15:26:18 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int is_minus)
{
	int	counter;

	counter = 0;
	if (n >= 16)
		counter += ft_puthex(n / 16, is_minus);
	if (n % 16 >= 10 && is_minus == 1)
		counter += ft_putchar(n % 16 + 'a' - 10);
	else if (n % 16 >= 10 && is_minus == 0)
		counter += ft_putchar(n % 16 + 'A' - 10);
	else
		counter += ft_putchar(n % 16 + '0');
	return (counter);
}
