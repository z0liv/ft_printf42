/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:02:33 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/20 11:09:44 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_put_uint(int n);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_puthex(unsigned int n, int is_minus);
int		ft_putmem(long int ptr);
size_t	ft_strlen(const char *str);

#endif
