/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:53:06 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/24 12:53:09 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		counter;
	int		sign;
	long	result;

	counter = 0;
	sign = 1;
	result = 0;
	while (nptr[counter] == ' ' || (nptr[counter] >= 9 && nptr[counter] <= 13))
		counter ++;
	if (nptr[counter] == '-' || nptr[counter] == '+')
	{
		if (nptr[counter] == '-')
			sign = -1;
		counter ++;
	}
	while (nptr[counter] >= '0' && nptr[counter] <= '9')
	{
		result = result * 10 + (nptr[counter] - '0');
		if (result * sign > 2147483647)
			return (-1);
		if (result * sign < -2147483648)
			return (0);
		counter ++;
	}
	return ((int)(result * sign));
}
/*
#include <stdio.h>
int main()
{
    printf("The integer value is: %d\n", ft_atoi("1234"));	
    printf("The integer value is: %d\n", ft_atoi("12.34"));
    printf("The integer value is: %d\n", ft_atoi("-1234"));
    printf("The integer value is: %d\n", ft_atoi("+1234"));
    printf("The integer value is: %d\n", ft_atoi("    +1234"));
    printf("The integer value is: %d\n", ft_atoi("    -1234"));
    printf("The integer value is: %d\n", ft_atoi("--1234"));
    printf("The integer value is: %d\n", ft_atoi("    -12as34"));
    printf("The integer value is: %d\n", ft_atoi("1+234"));

	return 0;
}
*/
