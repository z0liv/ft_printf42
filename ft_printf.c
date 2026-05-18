/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:12:07 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/18 16:13:43 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

static void	ft_puthex_fd(int n, int fd, int is_minus)
{
	if (fd > 0)
	{
		if(is_minus == 1)
		{
			if (n == -2147483648)
			{
				ft_putchar_fd('-', fd);
				ft_putchar_fd('2', fd);
				ft_puthex_fd(147483648, fd, is_minus);
			}
			else if (n >= 16)
				ft_puthex_fd(n / 16, fd, is_minus);
			if (n % 16 >= 10)
				ft_putchar_fd(n % 16 + 'a' - 10, fd);
			else
				ft_putchar_fd(n % 16 + '0', fd);
		}
		else
		{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			ft_puthex_fd(147483648, fd, is_minus);
		}
		else if (n >= 16)
			ft_puthex_fd(n / 16, fd, is_minus);
		if (n % 16 >= 10)
			ft_putchar_fd(n % 16 + 'A' - 10, fd);
		else
			ft_putchar_fd(n % 16 + '0', fd);

		}
	}
}

static void	ft_putunsignednbr_fd(int n, int fd)
{
	unsigned int nbr;
	nbr = (unsigned)n;
	if (fd > 0)
	{
		if (nbr >= 10)
		{
			ft_putnbr_fd(nbr / 10, fd);
			ft_putchar_fd(nbr % 10 + '0', fd);
		}
		else
			ft_putchar_fd(nbr + '0', fd);
	}
}

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
		ft_putunsignednbr_fd(va_arg(list, int), 1);
	else if (c == 'u')//show integer base 10 without sign
		ft_putunsignednbr_fd(va_arg(list, int), 1);
	else if (c == 'x')//show hexadecimal base 16 in minus
		ft_puthex_fd(va_arg(list, unsigned int), 1, 1);
	else if (c == 'X')//show hexadecimal base 16 in mayus
		ft_puthex_fd(va_arg(list, unsigned int), 1, 0);
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
	while (str[counter])
	{
		if (str[counter] == '%' && str[counter + 1])
		{
			ft_handle_conversion(str[counter + 1], list);
			counter = counter + 2;
		}
	    ft_putchar_fd(str[counter], 1);
	    counter ++;
	}
	va_end(list);
	return (counter);
}

//#include <stdio.h>
int	main(void)
{
	ft_printf("%X \n", 1000);
	int result = printf("--THIS IS ORIGINAL PRINTF-- \n this is the hex %X", 1000);
	printf("\n %d \n", result);
	return (0);
}
