/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:16:55 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 11:09:15 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	counter;

	counter = 0;
	if (s != NULL && f != NULL)
	{
		while (s[counter] != '\0')
		{
			f(counter, &s[counter]);
			counter ++;
		}
	}
}
/*
#include <stdio.h>
static void ft_sum_index_to_char(unsigned int index, char *c)
{
	*c = *c + index;
}
int	main(void)
{
	char	str[] = "Hello";

	printf("Original: %s \n", str);
	ft_striteri(str, ft_sum_index_to_char);
	printf("Result of striteri: %s \n", str);

	return (0);
}
*/