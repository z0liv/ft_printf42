/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omarquez <omarquez@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:58:32 by omarquez          #+#    #+#             */
/*   Updated: 2026/05/07 14:28:41 by omarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*first_node;
	t_list	*second_node;

	first_node = ft_lstnew("first node");
	second_node = ft_lstnew("second node");
	if (first_node && second_node)
	{
		printf("the first node after ft_lstadd_front: %s \n",
		 (char *)first_node -> content);
		ft_lstadd_front(&first_node, second_node);
		printf("the first node before ft_lstadd_front: %s \n",
		 (char *)first_node -> content);
		free(first_node);
	}
	return (0);
}
*/