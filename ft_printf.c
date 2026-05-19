/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:12:07 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/19 13:04:29 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static int	ft_handle_conversion(char c, va_list list)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_putstr(va_arg(list, void *)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'i')
		return (ft_put_uint(va_arg(list, int)));
	else if (c == 'u')
		return (ft_put_uint(va_arg(list, int)));
	else if (c == 'x')
		return (ft_puthex_fd(va_arg(list, unsigned int), 1));
	else if (c == 'X')
		return (ft_puthex_fd(va_arg(list, unsigned int), 0));
	else if (c == '%')
		return (ft_putchar(c));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		counter;
	int		delim_counter;
	int		written;
	va_list	list;

	va_start(list, str);
	if (!str)
		return (0);
	counter = 0;
	delim_counter = 0;
	written = 0;
	while (str[counter])
	{
		if (str[counter] == '%' && str[counter + 1])
		{
			written += ft_handle_conversion(str[counter + 1], list);
			delim_counter = delim_counter + 2;
			counter = counter + 2;
		}
		ft_putchar(str[counter]);
		counter ++;
	}
	va_end(list);
	return ((counter - delim_counter) + written);
}
/*
//#include <stdio.h>
int	main(void)
{
	int result = ft_printf("%s \n", "string");
	ft_printf("%d \n", result);
	result = printf("%s \n", "string");
	printf("%d \n", result);
	return (0);
}
*/