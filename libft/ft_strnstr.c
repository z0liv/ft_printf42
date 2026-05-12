/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:01:49 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/30 12:22:18 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	counter1;
	size_t	counter2;

	counter1 = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[counter1] != '\0' && counter1 < len)
	{
		counter2 = 0;
		while (big[counter1 + counter2] == little[counter2])
		{
			counter2 ++;
			if (little[counter2] == '\0')
				return ((char *)&big[counter1]);
			else if (counter1 + counter2 >= len && little[counter2] != '\0')
				return (NULL);
		}
		counter1 ++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char *big = "you have to find the little one";
	char *little = "little";
	char *empty = "";
	
	printf("result: %s \n", ft_strnstr(big, little, 32));
	printf("result: %s \n", ft_strnstr(big, little, 12));
	printf("result: %s \n", ft_strnstr(big, empty, 32));
	return (0);
}
*/
