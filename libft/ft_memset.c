/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:57:37 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 10:44:19 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*dest;

	dest = (char *)s;
	while (n > 0)
	{
		*dest = (unsigned char) c;
		dest ++;
		n --;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "hello";
	ft_memset(str, 'a', 3);
	printf("%s\n", str);
	return (0);
}
*/
