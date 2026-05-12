/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:10 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/30 11:22:22 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		size;
	const char	*temp_str;	

	size = ft_strlen(s);
	temp_str = (const char *) s;
	while (c > 256)
		c = c - 256;
	while (size > 0)
	{
		if (temp_str[size] == c)
			return ((char *)&temp_str[size]);
		size --;
	}
	if (temp_str[size] == c)
		return ((char *)&temp_str[size]);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "Hello, World!";
	printf("the last occurrence found on: %s \n", ft_strrchr(str, 'o'));	
	printf("the last occurrence found on: %s \n", ft_strrchr(str, 'a'));	
	printf("the last occurrence found on: %p \n", ft_strrchr(str, '\0'));	
	return (0);
}
*/
