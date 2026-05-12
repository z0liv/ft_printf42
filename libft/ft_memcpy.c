/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:49:43 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/30 11:35:39 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			counter;
	char			*dest_temp;
	const char		*src_temp;

	counter = 0;
	dest_temp = (char *) dest;
	src_temp = (const char *) src;
	if (dest_temp == NULL && src_temp == NULL)
		return (NULL);
	while (counter < n)
	{
		dest_temp[counter] = src_temp[counter];
		counter ++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src_char[20] = " World";
	char	dest_char[20] = "Hello";
	int		src_int_arr[] = {10, 20, 30, 40, 50};
	int		size = sizeof(src_int_arr)/sizeof(src_int_arr[0]);
	int		dest_int_arr[size], i;
	int		dest_int = 0;
	int		src_int = 42;

	printf("Memcpy char\n");
	printf("src char: %s \n", src_char);
	printf("dest char: %s \n", dest_char);
	ft_memcpy(dest_char + 5, src_char, 6);
	printf("src char: %s \n", src_char);
	printf("dest char: %s \n", dest_char);

	printf("Memcpy int\n");
	printf("src int: %d \n", src_int);
	printf("dest int: %d \n", dest_int);	
	ft_memcpy(&dest_int, &src_int, 1);
	printf("src int: %d \n", src_int);
	printf("dest int: %d \n", dest_int);
	

	printf("Memcpy int array\n");
	for (i = 0; i < size; i ++)
		printf("%d ", dest_int_arr[i]);
	printf("\n");
	ft_memcpy(dest_int_arr, src_int_arr, sizeof(src_int_arr));
 	for (i = 0; i < size; i ++)
		printf("%d ", dest_int_arr[i]);

	return (0);
}
*/
