/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:56:47 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/30 15:52:37 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	size;
	size_t	counter;

	counter = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	dest = (char *) malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	while (counter < len)
	{
		dest[counter] = s[start + counter];
		counter ++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char const src[] = "this is the source";
	char *dest;
	dest = ft_substr(src, 12, 17);
	printf("%s \n", dest)
	return (0);
}
*/
