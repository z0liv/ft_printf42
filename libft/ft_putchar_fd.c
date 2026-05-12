/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:41:36 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 11:13:16 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
	{
		write(fd, &c, sizeof(c));
	}
}
/*
#include <fcntl.h>
int	main(void)
{
	int file_desc;
	
	file_desc = open("test", O_RDWR);
	if (file_desc > 0)
		ft_putchar_fd('c', file_desc); 
	return (0);
}
*/