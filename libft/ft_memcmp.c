/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:56:46 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 14:35:28 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		counter;
	const char	*s1_temp;
	const char	*s2_temp;

	counter = 0;
	s1_temp = (const char *) s1;
	s2_temp = (const char *) s2;
	if (n == 0)
		return (0);
	while (counter < n)
	{
		if ((unsigned char)s1_temp[counter]
			< (unsigned char)s2_temp[counter])
			return (-1);
		else if ((unsigned char)s1_temp[counter]
			> (unsigned char)s2_temp[counter])
			return (1);
		counter ++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char    *string;
    char    *string_greater;
    char    *string_less;
    
    string = "Hello, World!";
    string_greater = "hello, World!";
    string_less = "ABC";
    
    printf("result equal: %d \n", ft_memcmp(string, string, 5));
    printf("result first one is less: %d \n",
	ft_memcmp(string, string_greater, 5));
    printf("result first one is greater: %d \n",
	ft_memcmp(string, string_less, 5));

    return (0);
}
*/
