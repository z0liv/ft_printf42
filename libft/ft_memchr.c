/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:56:27 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/27 10:36:30 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*temp_str;
	size_t		counter;

	temp_str = (char *) s;
	counter = 0;
	while (counter < n)
	{
		if ((unsigned char) temp_str[counter] == (unsigned char) c)
			return ((char *) &temp_str[counter]);
		counter ++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[13] = "Hello, World!";
    
    printf("the first occurrence found on: %s \n", 
	(char *) ft_memchr(str, 'o', 13));
    printf("the first occurrence found on: %s \n", 
	(char *) ft_memchr(str, 'a', 13));
    printf("the firts occurrence found on: %p \n", ft_memchr(str, '\0', 13));
	ft_memchr("bonjourno", 'n', 2);
	return (0);
}
*/
