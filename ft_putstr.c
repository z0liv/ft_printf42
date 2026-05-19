/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:40:55 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/19 16:25:12 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	size_t	s_len;

	if (s != NULL)
	{
		s_len = ft_strlen(s);
		return (write(1, s, s_len));
	}
	else
		return (write(1, "(null)", 6));
}
