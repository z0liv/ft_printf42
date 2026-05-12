/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:01:34 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/27 11:50:52 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;
	int		result;

	counter = 0;
	result = 0;
	if (n == 0)
		return (0);
	while (counter < n && result == 0)
	{
		if ((unsigned char) s1[counter] < (unsigned char) s2[counter])
			result = -1;
		else if ((unsigned char) s1[counter] > (unsigned char) s2[counter])
			result = 1;
		counter ++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*string;
	char	*string_greater;
	char	*string_less;
	
	string = "Hello, World!";
	string_greater = "hello, World!";
	string_less = "ABC";
	
	printf("result equal: %d \n", ft_strncmp(string, string, 5));
	printf("result first one is less: %d \n",
	ft_strncmp(string, string_greater, 5));
	printf("result first one is greater: %d \n",
	ft_strncmp(string, string_less, 5));

	return (0);
}
*/
