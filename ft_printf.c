/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:12:07 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/15 13:19:38 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_handle_conversion(char c, va_list list)
{
	if (c == 'c')//show character (done?)
		ft_putchar_fd(va_arg(list, int), 1);
	else if (c == 's')//show string (done?)
		ft_putstr_fd(va_arg(list, char *), 1);
	else if (c == 'p')//show void pointer in hexadecimal
		ft_putstr_fd(va_arg(list, void *), 1);
	else if (c == 'd')//show decimal base 10 (done?)
		ft_putnbr_fd(va_arg(list, int), 1);
	else if (c == 'i')//show integer base 10
		ft_putnbr_fd(va_arg(list, unsigned int), 1);
	else if (c == 'u')//show integer base 10 without sign
	{
		if (list < 0)
			list = (unsigned int) list;
		ft_putnbr_fd(va_arg(list, unsigned int), 1);
	}
	else if (c == 'x')//show hexadecimal base 16 in minus
		ft_putchar_fd(c, 1);
	else if (c == 'X')//show hexadecimal base 16 in mayus
		ft_putchar_fd(c, 1);
	else if (c == '%')//show percentage (done?)
		ft_putchar_fd(c, 1);
}

int	ft_printf(char const *str, ...)
{
    int 	counter;
    size_t 	str_len;
	va_list list;
	va_start(list, str);

	if (!str)
		return (0);
    counter = 0;
	str_len = ft_strlen(str);
	if (str[str_len - 1] == '%' && str[str_len] == '\0')
		return (-1);
	while (str[counter] != '%' && str[counter])
	{
	    ft_putchar_fd(str[counter], 1);
	    counter ++;
	}
	if (str[counter] == '%' && str[counter + 1])
	{
		ft_handle_conversion(str[counter + 1], list);
		counter = counter + 2;
	}
	return (counter);
}

#include <stdio.h>
int	main(void)
{
	int	result = ft_printf("string %u", -14132); 
	
	printf("\n %d", result);
	printf("%u \n", -1234);
	return (0);
}
