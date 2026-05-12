/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:58:04 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/30 11:20:28 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*temp_str;
	int			counter;

	temp_str = (const char *) s;
	counter = 0;
	while (c > 256)
		c = c - 256;
	while (temp_str[counter] != '\0')
	{
		if (temp_str[counter] == c)
			return ((char *) &temp_str[counter]);
		counter ++;
	}
	if (temp_str[counter] == c)
		return ((char *) &temp_str[counter]);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "Hello, World!";
	
	printf("the first occurrence found on: %s \n", ft_strchr(str, 'o'));
    printf("the first occurrence found on: %s \n", ft_strchr(str, 'a'));
    printf("the firts occurrence found on: %p \n", ft_strchr(str, '\0'));

	return (0);
}
*/
