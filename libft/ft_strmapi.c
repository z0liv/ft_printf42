/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:57:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 10:59:25 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp;
	unsigned int	counter;

	counter = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (s[0] == '\0')
		return (ft_strdup(""));
	temp = malloc(ft_strlen(s) + 1);
	if (temp == NULL)
		return (NULL);
	while (s[counter] != '\0')
	{
		temp[counter] = f(counter, s[counter]);
		counter ++;
	}
	temp[counter] = '\0';
	return (temp);
}
/*
#include <stdio.h>
static char ft_sum_index_to_char(unsigned int index, char c)
{
	return (c + index);
}
int	main(void)
{
	char	*str = "Hello";
	char	*result;

	result = ft_strmapi(str, ft_sum_index_to_char);
	printf("Original: %s \n", str);
	printf("Result of strmapi: %s \n", result);

	free(result);
	return (0);
}
*/
