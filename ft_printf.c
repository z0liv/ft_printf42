/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:12:07 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/21 10:17:08 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_conversion(char c, va_list list)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_putmem((long int) va_arg(list, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(list, int)));
	else if (c == 'u')
		return (ft_put_uint(va_arg(list, int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(list, unsigned int), 1));
	else if (c == 'X')
		return (ft_puthex(va_arg(list, unsigned int), 0));
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
		if (str[counter] == '%')
		{
			written += ft_handle_conversion(str[counter + 1], list);
			delim_counter = delim_counter + 2;
			counter = counter + 2;
		}
		else
			ft_putchar(str[counter++]);
	}
	va_end(list);
	return ((counter - delim_counter) + written);
}
/*
#include <stdio.h>
int main (void)
{
	int	number = 123;
	int	cero_number = 0;
	int negative_number = -123;
	int	hexadecimal_number = 1000;
	int	negative_hexadecimal_number = -1000;
	int	min_number = -2147483648;
	int	max_number = 2147483647;
	unsigned int	unsigned_number = 123;
	char simple_char = '0';
	char especial_char = '@';
	char *string = "hello world";	
	char *empty_string = "";
	void *pointer = NULL;
	char *NULL_string = '\0';

	printf("Original Printf:\n");
	printf("\n");

	printf("= %i\n", number);
	printf("= %i\n", cero_number);
	printf("= %i\n", negative_number);
	printf("= %i\n", min_number);
	printf("= %d\n", max_number);
	printf("= %u\n", unsigned_number);
	printf("= %x\n", hexadecimal_number);
	printf("= %x\n", negative_hexadecimal_number);
	printf("= %X\n", hexadecimal_number);
	printf("= %X\n", negative_hexadecimal_number);
	printf("= %c\n", simple_char);
	printf("= %c\n", especial_char);
	printf("= %s\n", string);
	printf("= %s\n", empty_string);
	printf("= %p\n", pointer);
	printf("= %s\n", NULL_string);
	printf("\n");

	printf("My Ft_Printf:\n");
	printf("\n");

	ft_printf("= %i\n", number);
	ft_printf("= %i\n", cero_number);
	ft_printf("= %i\n", negative_number);
	ft_printf("= %i\n", min_number);
	ft_printf("= %d\n", max_number);
	ft_printf("= %u\n", unsigned_number);
	ft_printf("= %x\n", hexadecimal_number);
	ft_printf("= %x\n", negative_hexadecimal_number);
	ft_printf("= %X\n", hexadecimal_number);
	ft_printf("= %X\n", negative_hexadecimal_number);
	ft_printf("= %c\n", simple_char);
	ft_printf("= %c\n", especial_char);
	ft_printf("= %s\n", string);
	ft_printf("= %s\n", empty_string);
	ft_printf("= %p\n", pointer);
	ft_printf("= %s\n", NULL_string);
	printf("\n\n");

	int	counter_ft;
	int counter_og;
	counter_ft = ft_printf("Hello World, 658 %p, %s, %s, %%, %c, %d, %i, %u, %x, %X, %s\n",pointer, "", "hello", 'W', -30, 200,  0, 1565, 1565, NULL_string);
	counter_og = printf("Hello World, 658 %p, %s, %s, %%, %c, %d, %i, %u, %x, %X, %s\n", pointer, "", "hello", 'W', -30, 200,  0, 1565, 1565, NULL_string);
	printf("%i = %i\n", counter_ft, counter_og);
	ft_printf("%i = %i\n", counter_ft, counter_og);

	return (0);
}
*/
