/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:33:38 by omarquez          #+#    #+#             */
/*   Updated: 2026/04/30 17:19:39 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_start(char const *s1, char const *set)
{
	int		counter1;
	int		counter2;

	counter1 = 0;
	counter2 = 0;
	while (set[counter1] != '\0')
	{
		if (set[counter1] == s1[counter2])
		{
			counter1 = 0;
			counter2 ++;
		}
		else
			counter1 ++;
	}
	return ((int) counter2);
}

static int	ft_find_end(char const *s1, char const *set)
{
	int			counter1;
	size_t		counter2;

	counter1 = 0;
	counter2 = ft_strlen(s1) - 1;
	while (set[counter1] != '\0')
	{
		if (set[counter1] == s1[counter2])
		{
			counter1 = 0;
			counter2 --;
		}
		else
			counter1 ++;
	}
	return ((int) counter2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		new_len;
	char	*dest;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_find_start(s1, set);
	end = ft_find_end(s1, set);
	if (start == (int) ft_strlen(s1))
		return (ft_strdup(""));
	dest = malloc((end - start) + 2);
	if (dest == NULL)
		return (NULL);
	new_len = end - start;
	ft_strlcpy(dest, &s1[start], new_len + 2);
	return (dest);
}
/*
int	main(void)
{
	char	s1[] = "abaacabchello worldaabccabc";
	char	set[] = "abc";
	printf("%s \n", ft_strtrim(s1, set));
	return (0);
}
*/
