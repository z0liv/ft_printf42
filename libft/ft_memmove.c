/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:57:15 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/30 12:04:21 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_mem(unsigned char *dest, const unsigned char *src, size_t n)
{
	size_t	counter;

	if (dest < src)
	{
		counter = 0;
		while (n > counter)
		{
			dest[counter] = src[counter];
			counter ++;
		}
	}
	else
	{
		while (n > 0)
		{
			dest[n - 1] = src[n - 1];
			n --;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_temp;
	unsigned const char	*src_temp;

	dest_temp = (unsigned char *) dest;
	src_temp = (unsigned char *) src;
	if (dest_temp == NULL && src_temp == NULL)
		return (NULL);
	ft_fill_mem(dest_temp, src_temp, n);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char char_src[100] = "Hello, World";
	ft_memmove(char_src + 7, "Beautiful", 22);
	printf("%s \n", char_src);
	return (0);
}
*/
