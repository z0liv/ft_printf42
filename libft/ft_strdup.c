/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:58:33 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/27 11:25:45 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*dest;

	s_len = ft_strlen(s) + 1;
	dest = malloc(s_len);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s, s_len);
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *str = "Hello, World!";
	char *str_backup = ft_strdup(strtive
);

	if (str_backup != NULL)
	{
		printf("Original %s \n", str);
		printf("Copy %s \n", str_backup);
		free(str_backup);
	}
	else
		printf("Memory allocation failed. \n");

	return (0);
}
*/
