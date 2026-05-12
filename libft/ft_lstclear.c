/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 15:04:38 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 13:29:33 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_lst;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		temp_lst = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = temp_lst;
	}
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
	t_list	*second_node;
	char	*content1;
	char	*content2;

	content1 = ft_strdup("first");
	first_node = ft_lstnew(content1);
	content2 = ft_strdup("second");
	second_node = ft_lstnew(content2);
	if (first_node && second_node)
	{
		ft_lstadd_back(&first_node, second_node);
		printf("the first node is: %p \n",(char *)first_node);
		ft_lstclear(&first_node, del_content);
		printf("the first node after ft_lstclear: %p",first_node);
	}
	return (0);
}
*/