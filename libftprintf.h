/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:02:33 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/19 14:56:24 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_put_uint(int n);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int n, int is_minus);
int	ft_putmem(long int ptr);

#endif