/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:12:07 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/13 15:43:29 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_handle_conversion(char c)
{
	if (c == 'c')//show character
		ft_putchar_fd(c, 1);
	else if (c == 's')//show string
		ft_putstr_fd(c, 1);
	else if (c == 'p')//show void pointer in hexadecimal
		ft_putchar_fd(c, 1);
	else if (c == 'd')//show decimal base 10
		ft_putchar_fd(c, 1);
	else if (c == 'i')//show integer base 10
		ft_putchar_fd(c, 1);
	else if (c == 'u')//show integer base 10 without sign
		ft_putchar_fd(c, 1);
	else if (c == 'x')//show hexadecimal base 16 in minus
		ft_putchar_fd(c, 1);
	else if (c == 'X')//show hexadecimal base 16 in mayus
		ft_putchar_fd(c, 1);
	else if (c == '%')//show percentage
		ft_putchar_fd(c, 1);
	
}

int	ft_printf(char const *str, ...)
{
    int counter;
    
    counter = 0;
	if (!str)
		return (0);
	while (str[counter] != '%' && str[counter])
	{
	    ft_putchar_fd(str[counter], 1);
	    counter ++;
	}
	if (str[counter] == '%' && str[counter + 1])
	    ft_handle_conversion(str[counter + 1]);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	ft_printf("this is a string %");
	return (0);
}
