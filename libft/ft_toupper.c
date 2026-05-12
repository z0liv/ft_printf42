/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:54 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/24 13:02:56 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("the result of c is %c \n", ft_toupper('c'));
	printf("the result of C is %c \n", ft_toupper('C'));
	printf("the result of 1 is %c \n", ft_toupper('1'));
	
	return (0);
}
*/
