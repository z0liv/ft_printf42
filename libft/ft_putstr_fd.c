/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:01:30 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 11:15:32 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	s_len;

	if (fd > 0 && s != NULL)
	{
		s_len = ft_strlen(s);
		write(fd, s, s_len);
	}
}
/*
#include <fcntl.h>
int	main(void)
{
	int file_desc;
	
	file_desc = open("test", O_RDWR);
	if (file_desc > 0)
		ft_putstr_fd("hello world!", file_desc); 
	return (0);
}
*/