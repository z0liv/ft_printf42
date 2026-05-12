/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 12:10:59 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 11:21:35 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd > 0 && s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putstr_fd("\n", fd);
	}
}
/*
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	int file_desc;
	
	file_desc = open("test", O_RDWR);
	printf("%d \n", file_desc);
	if (file_desc > 0)
		ft_putendl_fd("hello world!", file_desc);
	return (0);
}
*/