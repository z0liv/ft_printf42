/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:02:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/24 13:02:33 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
    printf("the result of C is %c \n", ft_tolower('C'));
    printf("the result of c is %c \n", ft_tolower('c'));
    printf("the result of 1 is %c \n", ft_tolower('1'));
    
    return (0);
}
*/
