/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:00:58 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/27 11:24:18 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		count;
	size_t		src_len;

	count = 0;
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (count < (size - 1) && src[count])
		{
			dst[count] = src[count];
			count ++;
		}
		dst[count] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
int main(void)
{
	char	src[15] = "Hello, World!";
	char 	dest[10];
	size_t 	result;

	result = ft_strlcpy(dest, src, 4);
	printf("%lu \n", result);
	printf("%s \n", dest);
	return (0);
}
*/
