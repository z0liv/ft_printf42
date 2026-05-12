/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:53:45 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 14:50:58 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char		*temp;
	size_t		counter;

	counter = 0;
	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	temp = malloc(nmemb * size);
	if (temp != NULL)
	{
		while (counter < (nmemb * size))
		{
			temp[counter] = 0;
			counter ++;
		}
		return ((void *)temp);
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	int *result = (int *)ft_calloc(5, sizeof(int));
	printf("%p", result);
	free(result);
	return (0);
}
*/
