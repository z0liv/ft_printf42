/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:02:31 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 12:00:56 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("first node");
	if (node)
	{
		printf("Content of the node: %s \n", (char *)node -> content);
		free(node);
	}
	return (0);
}
*/