/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:12:16 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 11:50:18 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len_to_str(long n)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter ++;
		n = -n;
	}
	if (n == 0)
		counter ++;
	while (n != 0)
	{
		n = n / 10;
		counter ++;
	}
	return (counter);
}

static char	*ft_alloc_int_len(int len)
{
	char	*temp;

	temp = malloc((len + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	temp[0] = '0';
	return (temp);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		counter;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_int_len_to_str(nbr);
	result = ft_alloc_int_len(len);
	if (result == NULL)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	counter = len - 1;
	while (nbr != 0)
	{
		result[counter] = ((nbr % 10) + '0');
		nbr = nbr / 10;
		counter --;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s \n", ft_itoa(1234));
	return (0);
}
*/
