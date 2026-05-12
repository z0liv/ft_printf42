/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 14:38:52 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 13:21:54 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst -> content);
	free(lst);
}
/*
#include <stdio.h>
#include <stdlib.h>
static void	del_content(void *content)
{
	free(content);
}
int	main(void)
{
	t_list	*first_node;
	char	*content;

	content = ft_strdup("first");
	first_node = ft_lstnew(content);
	if (first_node)
	{
		printf("the node is: %s \n",(char *)first_node->content);
		ft_lstdelone(first_node, del_content);
		printf("the first node after ft_lstclear: %p",first_node);
	}
	return (0);
}
*/