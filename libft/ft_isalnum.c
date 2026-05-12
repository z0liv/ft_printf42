/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:54:47 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/24 12:54:49 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("the result is: %d \n", ft_isalnum(1));
        printf("the result is: %d \n", ft_isalnum('1'));
        printf("the result is: %d \n", ft_isalnum('c'));
        return (0);
}
*/
