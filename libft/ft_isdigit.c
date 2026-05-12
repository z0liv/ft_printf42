/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:55:55 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/24 12:55:57 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("The result is: %d \n", ft_isdigit('c'));
	printf("The result is: %d \n", ft_isdigit(1));
	printf("The result is: %d \n", ft_isdigit('1'));
	return (0);
}
*/
