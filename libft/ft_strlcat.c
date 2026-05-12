/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:59:11 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 10:44:40 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	counter;
	size_t	tofill;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	counter = 0;
	tofill = size - dst_len - 1;
	if (dst_len >= size)
		return (size + src_len);
	while (src[counter] && tofill--)
	{
		dst[dst_len + counter] = src[counter];
		counter ++;
	}
	dst[dst_len + counter] = '\0';
	return (src_len + dst_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[10] = "abc ";
	char src[] = "def";
	size_t result;

	result = ft_strlcat(dest, src, 8);

	printf("%s \n", dest);
	printf("%ld \n", result);
	return (0);
}
*/
