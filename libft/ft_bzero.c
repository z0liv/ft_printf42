/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:53:26 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 10:44:30 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*dest;

	dest = (char *)s;
	while (n > 0)
	{
		*dest = '\0';
		dest ++;
		n --;
	}
}
/*
#include <stdio.h>
int     main(void)
{
        char    str[] = "hello";
        ft_bzero(str, 3);
        printf("%s\n", str);
        return (0);
}
*/
